/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_white_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 16:48:40 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/03 16:16:43 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This functions returns true if character is whitespace
*/

int	ft_is_white_space(const char *str)
{
	if (*str == '\n' || *str == ' ' || *str == '\r' ||
			*str == '\v' || *str == '\f' || *str == '\t')
		return (1);
	else
		return (0);
}
