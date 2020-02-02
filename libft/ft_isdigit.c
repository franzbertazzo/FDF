/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:28:09 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 04:09:04 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The isdigit() function tests for a decimal digit character.
** Regardless of locale, this includes the following characters only:
**
** ``0''         ``1''         ``2''         ``3''         ``4''
** ``5''         ``6''         ``7''         ``8''         ``9''
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
