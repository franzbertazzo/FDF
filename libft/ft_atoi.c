/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:30:49 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/06 21:11:14 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The atoi() function converts the initial portion of the string
** pointed to by str to int representation.It is equivalent to:
** (int)strtol(str, (char **)NULL, 10);
** While the atoi() function uses the current locale,
** the atoi_l() function may be passed a locale directly.
** See xlocale(3) for more information.
*/

int	ft_atoi(const char *str)
{
	unsigned long long	value;
	unsigned long long	max;
	int					sign;

	value = 0;
	sign = 1;
	max = 9223372036854775807;
	while (ft_is_white_space(str))
	{
		++str;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ((*str) >= '0' && (*str) <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	if (value > max)
		return ((sign < 0) ? 0 : -1);
	return (value * sign);
}
