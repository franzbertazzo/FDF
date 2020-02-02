/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:33:41 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/29 19:59:16 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 2)
	{
		data = malloc(sizeof(t_data));
		if (!read_map(data, argv[1]))
		{
			ft_putstr("error");
			return (0);
		}
		init_data(data);
		mlx_hook(data->win_ptr, 2, 0, get_input_key, data);
		mlx_loop_hook(data->mlx_ptr, draw, data);
		mlx_loop(data->mlx_ptr);
	}
	return (0);
}
