/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:05:55 by natvazqu          #+#    #+#             */
/*   Updated: 2023/11/28 14:05:57 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;

	if (!lst)
		return (NULL);
	new_list = malloc(sizeof(t_list));
	temp = new_list;
	(void)del;
	temp -> content = f(lst -> content);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
		temp -> next = malloc(sizeof(t_list));
		temp -> next -> content = f(lst -> content);
		temp = temp -> next;
	}
	temp -> next = NULL;
	return (new_list);
}
