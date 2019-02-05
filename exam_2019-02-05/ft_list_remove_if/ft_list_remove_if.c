/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 10:21:56 by exam              #+#    #+#             */
/*   Updated: 2019/02/05 11:49:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *trav;

	if (begin_list == NULL || *begin_list == NULL || data_ref == NULL || 
			cmp == NULL)
	{
		return ;
	}
	while (*begin_list && !(*cmp)((*begin_list)->data, data_ref))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	trav = *begin_list;
	while (trav && trav->next)
	{
		tmp = trav->next;
		if (!(*cmp)(tmp->data, data_ref))
		{
			trav->next = tmp->next;
			free(tmp);
		}
		trav = trav->next;
	}
	return ;
}
