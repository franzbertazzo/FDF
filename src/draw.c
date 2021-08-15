* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 16:42:36 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/20 19:15:14 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	bresenham_line_draw(t_point *p, t_point *p1, t_data *data)
{
	float	x_step;
	float	y_step;
	int		max;
	int		z;
	int		z1;

	z = data->map[(int)p->y][(int)p->x];
	z1 = data->map[(int)p1->y][(int)p1->x];
	data->color = get_color(data, z * 20);
	zoom(p, p1, data);
	isometric(p, z, data);
	isometric(p1, z1, data);
	shift(p, p1, data);
	x_step = p1->x - p->x;
	y_step = p1->y - p->y;
	max = max_num(mod(x_step), mod(y_step));
	x_step /= max;
	y_step /= max;
	while ((int)(p->x - p1->x) || (int)(p->y - p1->y))
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, p->x, p->y, data->color);
		p->x += x_step;
		p->y += y_step;
	}
}

void	draw_vertical(t_point *origin, t_point *dest, int x, int y)
{
	set_point(origin, x, y);
	set_point(dest, x + 1, y);
}

void	draw_horizontal(t_point *origin, t_point *dest, int x, int y)
{
	set_point(origin, x, y);
	set_point(dest, x, y + 1);
}

int		draw(t_data *data)
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
			if (x < data->width - 1)
			{
				draw_vertical(data->origin, data->dest, x, y);
				bresenham_line_draw(data->origin, data->dest, data);
			}
			if (y < data->height - 1)
			{
				draw_horizontal(data->origin, data->dest, x, y);
				bresenham_line_draw(data->origin, data->dest, data);
			}
		}
	}
	return (0);
}
