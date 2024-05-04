/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:55:21 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/03 20:35:55 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cleanup(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = lst;
		lst = lst->next;
		del(tmp->content);
		free(tmp);
	}
}

/*t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_list;
	t_list	*last;
	t_list	*temp;
	void	*new_content;

	temp = lst;
	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	last = NULL;
	while (temp)
	{
		new_content = f(temp->content);
		current = ft_lstnew(new_content);
		if (!current)
		{
			del(new_content);
			cleanup(new_list, del);
			return (NULL);
		}
		if (last == NULL)
			new_list = current;
		else
			last->next = current;
		last = current;
		temp = temp->next;
	}
	return (new_list);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_list;
	t_list	*temp;
	void	*new_content;

	temp = lst;
	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (temp)
	{
		new_content = f(temp->content);
		current = ft_lstnew(new_content);
		if (!current)
		{
			del(new_content);
			cleanup(new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, current);
		temp = temp->next;
	}
	return (new_list);
}
