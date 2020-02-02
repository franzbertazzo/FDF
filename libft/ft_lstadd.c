/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:03:40 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/24 20:42:08 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the element new at the beginning of the list.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *aux;

	if (!alst)
		return ;
	aux = *alst;
	*alst = new;
	(*alst)->next = aux;
}
