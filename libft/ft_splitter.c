/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 21:50:45 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 04:08:16 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Auxliliary function for ft_strsplit.
** Allocates memory for each word them  splitted
*/

char	**ft_splitter(char **splitted, char const *s, size_t nbr_words, char c)
{
	char	**split;
	size_t	nbr_letters;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	split = splitted;
	while (i < (int)nbr_words)
	{
		nbr_letters = ft_count_letters(&s[k], c);
		if (!(split[i] = malloc(sizeof(char *) * nbr_letters + 1)))
			return (NULL);
		j = 0;
		while (*(s + k) == c)
			k++;
		while (*(s + k) != c && *(s + k))
			split[i][j++] = *(s + k++);
		split[i][j] = '\0';
		i++;
	}
	*(split + i) = NULL;
	return (splitted);
}
