/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:18:20 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/06 22:54:53 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	zoom(t_point *p, t_point *p1, t_data *data)
{
	p->x *= data->zoom;
	p->y *= data->zoom;
	p1->x *= data->zoom;
	p1->y *= data->zoom;
}

void	shift(t_point *p, t_point *p1, t_data *data)
{
	p->x += data->shift_x;
	p->y += data->shift_y;
	p1->x += data->shift_x;
	p1->y += data->shift_y;
}

void	isometric(t_point *p, int z, t_data *data)
{
	if (data->dimensions == 3)
	{
		p->x = (p->x - p->y) * cos(0.8);
		p->y = (p->x + p->y) * sin(0.8) - z;
	}
}

void	scale(t_data *data)
{
	int		x;
	int		y;

	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	y = -1;
	while (++y < data->height)
	{
		x = -1;
		while (++x < data->width)
		{
			if (data->map[y][x] > 0)
			{
				if (data->z < data->max_z)
					data->map[y][x] *= 2;
			}
			else
				data->map[y][x] /= 2;
		}
	}
	++data->z;
}
