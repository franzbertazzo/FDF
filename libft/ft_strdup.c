/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:24:18 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 20:54:06 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strdup() function allocates sufficient memory for a copy of the
** string s1, does the copy, and returns a pointer to it.  The pointer may
** subsequently be used as an argument to the function free(3).
** If insufficient memory is available, NULL is returned and errno is set to
** ENOMEM.
** The strndup() function copies at most n characters from the string s1
** always NUL terminating the copied string.
*/

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	dup = (char *)malloc((ft_strlen(s1) + 1) * sizeof(*dup));
	if (dup != NULL)
	{
		i = 0;
		while (s1[i])
		{
			dup[i] = s1[i];
			i++;
		}
		dup[i] = '\0';
		return (dup);
	}
	return (NULL);
}
