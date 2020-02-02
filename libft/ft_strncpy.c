/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:50:43 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/05 21:33:21 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The stpcpy() and strcpy() functions copy the string src to dst (including
** the terminating `\0' character.)
** The stpncpy() and strncpy() functions copy at most len characters from
** src into dst.  If src is less than len characters long, the remainder of
** dst is filled with `\0' characters.  Otherwise, dst is not terminated.
** The source and destination strings should not overlap, as the behavior is
** undefined.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t src_size;

	src_size = ft_strlen(src);
	i = 0;
	while (i < len)
	{
		if (i < src_size)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
