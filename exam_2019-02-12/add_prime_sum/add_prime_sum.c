/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:57:59 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 10:34:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;

	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
	return ;
}

int	ft_atoi(char *str)
{
	int i;
	int num;
	int neg;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] && ((str[i] > 8 && str[i] < 14) || str[i] == ' '))
		i++;
	if (str[i] && str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] && str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');  
		i++;
	}
	return (neg * num);
}

int	is_prime(nb)
{
	int i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int nb;
	int i;
	int sum;

	if (argc != 2 || argv[1] == '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	if (nb < 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (nb < 2)
		ft_putnbr(nb);
	else
	{
		i = 2;
		sum = 0;
		while (i <= nb)
		{
			if (is_prime(i))
			   sum += i;	
			i++;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
