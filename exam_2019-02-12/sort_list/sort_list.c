/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:42:12 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 11:38:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <string.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*head;
	t_list	*end;
	int		tmp;
	int		sorted;

	if (lst == NULL || cmp == NULL)
		return (NULL);
	head = lst;
	end = NULL;
	sorted = 1;
	while (lst && lst->next != end)
	{
		if ((*cmp)(lst->data, (lst->next)->data) == 0)
		{
			sorted = 0;
			tmp = lst->data;
			lst->data = (lst->next)->data;
			(lst->next)->data = tmp;
		}
		lst = lst->next;
		if (lst->next == end && sorted == 0)
		{
			end = lst;
			lst = head;
			sorted = 1;
		}
	}
	return (head);
}
