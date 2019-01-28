/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:40:24 by exam              #+#    #+#             */
/*   Updated: 2018/10/02 11:13:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_point.h"

void	fill(char **tab, int x, int y, int prevColor, t_point size)
{
	int maxWidth = size.x;
	int maxHeight = size.y;

	if (x < 0 || x >= maxWidth || y < 0 || y >= maxHeight)
		return ;
	if (tab[y][x] != prevColor)
		return ;
	tab[y][x] = 'F';
	fill(tab, x - 1, y, prevColor, size);
	fill(tab, x + 1, y, prevColor, size);
	fill(tab, x, y - 1, prevColor, size);
	fill(tab, x, y + 1, prevColor, size);	
	return ;
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char prevColor;
	int x;
	int y;

	x = begin.x;
	y = begin.y;
	prevColor = tab[y][x];
	fill(tab, x, y, prevColor, size);
	return ;
}
