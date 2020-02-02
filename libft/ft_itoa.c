/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 16:58:51 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 21:03:02 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’
** representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails,
** the function returns NULL.
*/

char	*ft_itoa(int n)
{
	int				sign;
	int				digits;
	char			*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = ft_intlen(n);
	sign = (n < 0 ? 1 : 0);
	if (!(str = ft_strnew(digits)))
		return (NULL);
	str[digits--] = '\0';
	while (digits >= sign)
	{
		if (n < 0)
			n *= -1;
		str[digits] = n % 10 + '0';
		n /= 10;
		digits--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
