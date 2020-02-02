/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 01:44:13 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/21 18:41:11 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” substring
** from the string given as argument. The substring begins at
** index start and is of size len. If start and len aren’t refering to a valid
** substring, the behavior is undefined. If the
** allocation fails, the function returns NULL.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	if (!s || !(substr = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len > 0 && s[i])
	{
		substr[i] = s[start];
		start++;
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
