/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 22:11:11 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/05 21:27:47 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcmp() and strncmp() functions lexicographically compare the null-
** terminated strings s1 and s2.
** The strncmp() function compares not more than n characters.  Because
** strncmp() is designed for comparing strings rather than binary data,
** characters that appear after a `\0' character are not compared.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
