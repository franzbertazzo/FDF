/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:39:45 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/06 22:14:57 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	change_color(t_data *data)
{
	data->colorbase = (rand() % 0xFFFFFF);
	data->colorgradient = (rand() % 0xFFFFFF);
}

int		get_light(int start, int end, double percentage)
{
	return ((int)((1 - percentage) * start + percentage * end));
}

int		get_color(t_data *data, double z)
{
	int		red;
	int		green;
	int		blue;
	double	percentage;

	if (z < 0)
		z *= -1;
	else if (z == 0)
		return (data->colorbase);
	else if (z >= 300)
		return (data->colorgradient);
	percentage = z / 300;
	red = get_light((data->colorbase >> 16) & 0xFF,
			(data->colorgradient >> 16) & 0xFF, percentage);
	green = get_light((data->colorbase >> 8) & 0xFF,
			(data->colorgradient >> 8) & 0xFF, percentage);
	blue = get_light(data->colorbase & 0xFF,
			data->colorgradient & 0xFF, percentage);
	return ((red << 16) | (green << 8) | blue);
}
