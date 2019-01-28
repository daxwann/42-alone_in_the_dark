/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 22:39:12 by xwang             #+#    #+#             */
/*   Updated: 2018/09/29 23:18:09 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *range;
	int length;
	int i;

	length = end - start;
	if (length < 0)
		length *= -1;
	range = (int *)malloc(sizeof(int) * (length + 1));
	i = 0;
	while (i <= length)
	{
		range[i] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	return (range);
}
