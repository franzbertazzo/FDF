/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 13:40:32 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/05 21:17:26 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of the string
** given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the
** following characters ’ ’, ’\n’ and ’\t’.
** If s has no whitespaces at the beginning or at the end,
** the function returns a copy of s.
** If the allocation fails the function returns NULL.
*/

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_is_white_space(s + start))
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	end = start;
	while (s[end] != '\0')
		end++;
	end--;
	while (ft_is_white_space(s + end))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
