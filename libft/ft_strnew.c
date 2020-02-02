/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:11:53 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/04 21:54:11 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’.
** Each character of the string is initialized at
** ’\0’. If the allocation fails the function returns NULL.
*/

char	*ft_strnew(size_t size)
{
	char *str;

	if ((str = malloc(size + 1)))
	{
		ft_memset(str, 0, size + 1);
		return (str);
	}
	else
		return (0);
}
