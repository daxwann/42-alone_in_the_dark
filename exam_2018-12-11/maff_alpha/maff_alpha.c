/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 09:57:08 by exam              #+#    #+#             */
/*   Updated: 2018/12/11 10:04:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char lower;
	char upper;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower % 2 == 0)
		{
			upper = lower - 'a' + 'A';
			write(1, &upper, 1);
		}
		else
			write(1, &lower, 1);
		lower++;
	}
	write(1, "\n", 1);
	return (0);
}
