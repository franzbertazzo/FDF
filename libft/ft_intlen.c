/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 19:20:50 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/05 12:47:52 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This functions returns the number of digits of an int number
*/

int	ft_intlen(int nbr)
{
	int len;

	len = 0;
	len = (nbr <= 0 ? 1 : 0);
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}
