/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:20:50 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/07 22:29:31 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memccpy() function copies bytes from string src to string dst.
** If the character c (as converted to an unsigned char)
** occurs in the string src,
** the copy stops and a pointer to the byte after the copy of c in the string
** dst is returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
*/

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	void	*ptr_c;
	int		c_pos;

	ptr_c = 0;
	ptr_c = (unsigned char*)ft_memchr(src, c, n);
	if (ptr_c != NULL)
	{
		c_pos = (ptr_c - src) + 1;
		return (ft_memcpy(dst, src, c_pos) + c_pos);
	}
	ft_memcpy(dst, src, n);
	return (0);
}
