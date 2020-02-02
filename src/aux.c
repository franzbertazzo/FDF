/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:30:35 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/06 23:18:31 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		max_num(int a, int b)
{
	return (a > b ? a : b);
}

float	mod(int a)
{
	return (a < 0 ? a * -1 : a);
}

void	set_point(t_point *p, float x, float y)
{
	p->x = x;
	p->y = y;
}

void	init_data(t_data *data)
{
	data->mlx_ptr = mlx_init();
	data->win_ptr = mlx_new_window(data->mlx_ptr, 1024, 768, "FDF");
	data->zoom = 20;
	data->max_z = 3;
	data->z = 0;
	data->shift_x = 400;
	data->shift_y = 300;
	data->dimensions = 3;
	data->scale = 1;
	data->colorbase = 870328;
	data->color = 15900999;
	data->colorgradient = 13113509;
	data->origin = malloc(sizeof(t_point));
	data->dest = malloc(sizeof(t_point));
	set_point(data->origin, 0, 0);
	set_point(data->dest, 0, 0);
}

void	close_program(t_data *data)
{
	free(data);
	exit(0);
}
