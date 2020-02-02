/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:01:26 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 21:03:28 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
*/

int	ft_memcmp(const void *a, const void *b, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)a;
	s2 = (unsigned char *)b;
	while (n--)
	{
		if (*s1++ != *s2++)
		{
			s1--;
			s2--;
			return (*s1 - *s2);
		}
	}
	return (0);
}
