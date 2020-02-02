/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:00:46 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/05 21:34:44 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*last_s;
	char		*last_d;

	d = dst;
	s = src;
	if (!dst && !src)
		return (0);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		last_s = s + (len - 1);
		last_d = d + (len - 1);
		while (len--)
			*last_d-- = *last_s--;
	}
	return (dst);
}
