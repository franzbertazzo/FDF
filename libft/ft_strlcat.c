/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:05:38 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 04:32:22 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcat() appends string src to the end of dst.  It will append at most
** dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
** dstsize is 0 or the original dst string was longer than dstsize (in prac-
** tice this should not happen as it means that either dstsize is incorrect
** or that dst is not a proper string).
** If the src and dst strings overlap, the behavior is undefined.
*/

size_t	ft_strlcat(char *restrict dst, char *restrict src, size_t dstsize)
{
	size_t dlen;
	size_t ret;

	ret = ft_strlen(src);
	if (dstsize == 0)
		return (ret);
	dlen = ft_strlen(dst);
	ret += dlen > dstsize ? dstsize : dlen;
	while (dlen < dstsize - 1 && *src)
		dst[dlen++] = *src++;
	dst[dlen] = '\0';
	return (ret);
}
