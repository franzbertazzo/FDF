/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:58:58 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/08 19:12:33 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strnstr() function locates the first occurrence of the null-termi-
** nated string needle in the string haystack, where not more than len char-
** acters are searched.  Characters that appear after a `\0' character are
** not searched.  Since the strnstr() function is a FreeBSD specific API, it
** should only be used when portability is not a concern.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (i < len && haystack[i] != '\0')
	{
		start = i;
		j = 0;
		while (haystack[i] == needle[j] && (size_t)i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char*)&haystack[start]);
			j++;
			i++;
		}
		i = start;
		i++;
	}
	return (0);
}
