/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:44:21 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/24 20:47:30 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list *head, void *content, size_t s)
{
	if (!head)
		return ;
	while (head->next)
		head = head->next;
	head->next = ft_lstnew(content, s);
}
