/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 10:08:27 by exam              #+#    #+#             */
/*   Updated: 2019/02/05 10:16:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char digit;

	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
	return ;
}

int		main(int argc, char **argv)
{
	int sum;

	(void) argv;
	sum = argc - 1;
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
