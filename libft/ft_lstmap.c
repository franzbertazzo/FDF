/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:46:43 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/07 20:14:29 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting
** from the successive applications of f. If the allocation fails, the function
** returns NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*begin;

	if (!lst)
		return (NULL);
	temp = f(lst);
	begin = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = f(lst);
		temp = temp->next;
	}
	return (begin);
}
