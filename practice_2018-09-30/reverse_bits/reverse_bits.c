/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 22:09:32 by xwang             #+#    #+#             */
/*   Updated: 2018/09/29 22:23:38 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reversed;
	unsigned char div1;
	unsigned char div2;

	div1 = 128;
	div2 = 1;
	reversed = 0;
	while (div1)
	{
		if (octet / div1 != 0)
		{
			octet -= div1;
			reversed += div2;
		}
		div1 /= 2;
		div2 *= 2;
	}
	return (reversed);
}
