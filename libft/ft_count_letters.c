/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_letters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 13:46:19 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/02 18:28:45 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** auxiliary function that counts the number of letters(characters)
** in a string "s" delimited by character 'c'
*/

size_t	ft_count_letters(const char *s, const char c)
{
	size_t		nbr_of_letters;
	const char	*word;

	word = s;
	nbr_of_letters = 0;
	while (*word == c)
		word++;
	while (*word != c && *word)
	{
		nbr_of_letters++;
		word++;
	}
	return (nbr_of_letters);
}
