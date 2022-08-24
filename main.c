/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukri <msukri@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:50:28 by msukri            #+#    #+#             */
/*   Updated: 2022/08/11 20:26:52 by msukri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_value	value;

	if (!((argc == 5 || argc == 6) && ft_legal_input(argv)))
		return (ft_error(-1, NULL));
	if (ft_atoi(argv[1]) > 200)
		return (ft_error(-2, NULL));
	ft_init_value(&value);
	if (!(ft_value_setup(&value, argc, argv) && ft_create_join(&value)))
		return (ft_error(-5, &value));
	//ft_sem_close(&value);
	ft_free_data(&value);
	return (0);
}

// void	ft_sem_close(t_value *value)
// {
// 	int	i;
// 	t_philo	**p;
	
// 	p = value->p;
// 	i = -1;
// 	while (++i < (int)value->philo)
// 	{
// 		sem_close(p[i]->sem_eat);
// 	}
// 	sem_close(value->sem_fork);
// 	sem_close(value->sem_meal);
// 	sem_close(value->sem_print);
// }
