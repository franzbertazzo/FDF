/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:26:33 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 04:06:07 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself)
** obtained by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
** Example:
** ft_strsplit("*hello*fellow***students*", ’*’)
** returns the array ["hello", "fellow", "students"].
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**splitted;
	size_t	nbr_words;
	size_t	nbr_letters;

	nbr_words = 0;
	nbr_letters = 0;
	if (!s)
		return (NULL);
	nbr_words = ft_count_words(s, c);
	if (!(splitted = (char**)malloc(sizeof(char *) * nbr_words + 1)))
		return (NULL);
	splitted = ft_splitter(splitted, s, nbr_words, c);
	return (splitted);
}
