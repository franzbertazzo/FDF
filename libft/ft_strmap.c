/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:49:14 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 20:58:17 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string given
** as argument to create a “fresh” new string (with malloc(3))
** resulting from the successive applications of f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*aux;
	size_t	slen;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	if (!(str = ft_strnew(slen)))
		return (NULL);
	aux = str;
	while (slen-- > 0)
		*aux++ = f(*s++);
	*aux = '\0';
	return (str);
}
