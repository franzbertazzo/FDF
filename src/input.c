/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 10:00:17 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/06 23:26:58 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	handle_movement(int key, t_data *data)
{
	if (key == 123)
		data->shift_x += 1 * data->zoom;
	if (key == 124)
		data->shift_x -= 1 * data->zoom;
	if (key == 24)
		data->zoom += 1;
	if (key == 27)
		data->zoom -= 1;
	if (key == 126)
		data->shift_y += 1 * data->zoom;
	if (key == 125)
		data->shift_y -= 1 * data->zoom;
}

int		get_input_key(int key, t_data *data)
{
	if (key == 53)
		close_program(data);
	if (key == 15)
		reload(data);
	handle_movement(key, data);
	if (key == 19)
		data->dimensions = 2;
	if (key == 20)
		data->dimensions = 3;
	if (key == 36)
		change_color(data);
	if (key == 30)
		scale(data);
	return (0);
}
