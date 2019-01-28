/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 10:13:45 by exam              #+#    #+#             */
/*   Updated: 2018/10/30 10:24:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(unsigned int nb)
{
	char a;

	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	a = nb % 10 + '0';
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	unsigned int nb;
	(void)argv;

	nb = (unsigned int)(argc - 1);
	ft_putnbr(nb);
	write(1, "\n", 1);
	return (0);
}
