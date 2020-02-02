/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbertazz <fbertazz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 22:29:08 by fbertazz          #+#    #+#             */
/*   Updated: 2019/10/07 17:50:00 by fbertazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link. The
** variables content and content_size of the new link are initialized by
** copy of the parameters of the function. If the parameter content is nul,
** the variable content is initialized to
** NULL and the variable content_size is initialized to 0 even
** if the parameter content_size isn’t. The variable next is
** initialized to NULL. If the allocation fails, the function returns NULL.
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->next = NULL;
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
		return (lst);
	}
	lst->content = malloc(sizeof(content) * content_size);
	ft_memcpy(lst->content, content, content_size);
	lst->content_size = content_size;
	return (lst);
}
