/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:34:45 by fbertazz          #+#    #+#             */
/*   Updated: 2019/09/30 16:54:32 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char		*aux_hay;
	char		*aux_ndl;
	size_t		ndl_len;
	size_t		count;

	ndl_len = ft_strlen(needle);
	if (ndl_len == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		aux_hay = (char *)haystack;
		aux_ndl = (char *)needle;
		count = 0;
		while (*aux_ndl && *aux_hay)
		{
			if (*aux_hay == *aux_ndl)
				count++;
			if (count == ndl_len)
				return ((char *)haystack);
			aux_hay++;
			aux_ndl++;
		}
		haystack++;
	}
	return (0);
}
