/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:26:38 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/06 22:42:29 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		count_points(char *line)
{
	int	i;
	int	nbrs;

	i = 0;
	nbrs = 0;
	while (line[i] != '\0')
	{
		if (ft_isdigit(line[i]))
		{
			nbrs++;
			while (ft_isdigit(line[i]))
				i++;
		}
		i++;
	}
	return (nbrs);
}

int		get_map_size(t_data *data, char *file)
{
	char	*line;
	int		x;
	int		y;
	int		fd;

	x = 0;
	y = 0;
	if ((fd = open(file, O_RDONLY)) < 0)
		return (0);
	while (get_next_line(fd, &line) == 1)
	{
		if (x == 0)
			x = count_points(line);
		y++;
	}
	data->width = x;
	data->height = y;
	close(fd);
	return (1);
}

void	set_map_value(int *map_line, char *line)
{
	int		i;
	char	**split;

	split = ft_strsplit(line, ' ');
	i = 0;
	while (split[i])
	{
		map_line[i] = ft_atoi(split[i]);
		free(split[i]);
		i++;
	}
	free(split);
}

int		read_map(t_data *data, char *file)
{
	int		fd;
	char	*line;
	int		y;

	data->file = file;
	y = 0;
	if (!get_map_size(data, file))
		return (0);
	if ((fd = open(file, O_RDONLY)) < 0)
		return (0);
	data->map = (int **)malloc(sizeof(int *) * (data->height + 1));
	y = 0;
	while (y <= data->height)
		data->map[y++] = (int *)malloc(sizeof(int) * (data->width + 1));
	y = 0;
	while (get_next_line(fd, &line))
	{
		set_map_value(data->map[y], line);
		free(line);
		y++;
	}
	close(fd);
	data->map[y] = NULL;
	return (1);
}

int		reload(t_data *data)
{
	int		fd;
	char	*line;
	int		y;

	if ((fd = open(data->file, O_RDONLY)) < 0)
		return (0);
	y = 0;
	while (get_next_line(fd, &line))
	{
		set_map_value(data->map[y], line);
		free(line);
		y++;
	}
	data->z = 0;
	close(fd);
	return (1);
}
