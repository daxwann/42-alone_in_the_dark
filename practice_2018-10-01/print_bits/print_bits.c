/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 23:23:59 by xwang             #+#    #+#             */
/*   Updated: 2018/09/30 23:33:35 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char div;

	div = 128;
	while (div)
	{
		if (octet / div != 0)
		{
			write(1, "1", 1);
			octet -= div;
		}
		else
			write(1, "0", 1);
		div /= 2;
	}
	return ;
}
