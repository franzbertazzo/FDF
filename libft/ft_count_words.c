/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 12:44:46 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/02 18:26:18 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Auxiliary function for ft_strsplit
** counts de number of words in a string "s" separated by a character 'c'
*/

size_t	ft_count_words(const char *s, const char c)
{
	size_t		nbr_of_words;
	const char	*sentence;

	nbr_of_words = 0;
	sentence = s;
	while (*sentence)
	{
		if (*sentence != c)
			nbr_of_words++;
		while (*sentence != c && *(sentence + 1))
			sentence++;
		sentence++;
	}
	return (nbr_of_words);
}
