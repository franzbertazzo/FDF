/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:45:29 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 20:51:46 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memchr() function locates the first occurrence of c
** (converted to an unsigned char) in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	x;

	ptr = (unsigned char*)s;
	x = (unsigned char)c;
	while (n--)
	{
		if (*ptr != (unsigned char)c)
		{
			ptr++;
		}
		else
			return (ptr);
	}
	return (0);
}
