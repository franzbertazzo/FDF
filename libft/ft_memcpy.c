/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:56:46 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/05 21:31:42 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memccpy() function copies bytes from string src to string dst.  If
** the character c (as converted to an unsigned char) occurs in the string
** src, the copy stops and a pointer to the byte after the copy of c in the
** string dst is returned.  Otherwise, n bytes are copied, and a NULL
** pointer is returned.
*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const char	*ptr_src;
	char		*ptr_dst;

	ptr_src = src;
	ptr_dst = dst;
	if (!dst && !src)
		return (NULL);
	else
	{
		while (n-- > 0)
			*ptr_dst++ = *ptr_src++;
		return (dst);
	}
}
