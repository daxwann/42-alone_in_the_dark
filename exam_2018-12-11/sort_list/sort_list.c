/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 10:59:02 by exam              #+#    #+#             */
/*   Updated: 2018/12/11 11:35:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <string.h>

void	swap_data(t_list *lst1, t_list *lst2)
{
	int	tmp;

	tmp = lst2->data;
	lst2->data = lst1->data;
	lst1->data = tmp;
	return ;
}

t_list	*sort_list(t_list* lst, int(*cmp)(int, int))
{
	int	sorted;
	t_list	*head;
	int	diff;

	if (!lst || !cmp)
		return (NULL);
	sorted = 1;
	head = lst;
	while (lst)
	{
		if (lst->next)
		{
			diff = (*cmp)(lst->data, (lst->next)->data);
			if (diff == 0)
			{
				swap_data(lst, lst->next);
				sorted = 0;
			}
		}
		if (lst->next == NULL && !sorted)
		{
			lst = head;
			sorted = 1;
		}
		else
			lst = lst->next;
	}
	return (head);
}
