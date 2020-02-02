/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 16:19:18 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/05 21:26:54 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strchr() function locates the first occurrence of c
** (converted to a char) in the string pointed to by s.
** The terminating null character is considered to be
** part of the string; therefore if c is `\0',
** the functions locate the terminating `\0'.
** The strrchr() function is identical to strchr(), except it locates the last
** occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char *ret;

	ret = 0;
	while (*s)
	{
		if (*s == (char)c)
			ret = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)ret);
}
