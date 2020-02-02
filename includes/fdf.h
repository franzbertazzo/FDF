/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:34:49 by fbertazz          #+#    #+#             */
/*   Updated: 2020/01/06 22:55:01 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "../minilibx_macos/mlx.h"
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>

typedef struct	s_point
{
	float	x;
	float	y;
}				t_point;

typedef	struct	s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		height;
	int		width;
	int		zoom;
	int		shift_x;
	int		shift_y;
	int		scale;
	int		color;
	int		max_z;
	int		z;
	int		**map;
	int		dimensions;
	int		colorbase;
	int		colorgradient;
	char	*file;
	t_point	*origin;
	t_point	*dest;
}				t_data;

int				get_input_key(int key, t_data *data);
int				get_input_mouse(int button, t_data *data);
int				read_map(t_data *data, char *file);
void			bresenham_line_draw(t_point *p, t_point *p1, t_data *data);
void			print_map(t_data *data);
void			set_point(t_point *p, float x, float y);
int				draw(t_data *data);
int				max_num(int a, int b);
float			mod(int a);
void			zoom(t_point *p, t_point *p1, t_data *data);
void			shift(t_point *p, t_point *p1, t_data *data);
void			isometric(t_point *p, int z, t_data *data);
void			init_data(t_data *data);
int				get_light(int start, int end, double percentage);
int				get_color(t_data *data, double z);
void			change_color(t_data *data);
void			scale(t_data *data);
void			close_program(t_data *data);
int				reload(t_data *data);
#endif
