/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:21:31 by abdait-m          #+#    #+#             */
/*   Updated: 2021/09/22 16:57:12 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHILOSOPHERS_H

#define _PHILOSOPHERS_H

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

typedef struct s_philo
{
	char		**options;
	int			nbr_ps;
	int			t_die;
	int			t_eat;
	int			t_sleep;
	int			nbr_peat;
	int			error;
}				t_philo;

#endif