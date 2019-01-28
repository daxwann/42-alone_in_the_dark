/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 09:52:05 by exam              #+#    #+#             */
/*   Updated: 2018/10/02 10:30:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}

void	ft_putnb(int nb)
{
	char digit;

	if (nb / 10 != 0)
		ft_putnb(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int nb)
{
	int k;
	
	k = 2;
	while (k <= nb / k)
	{
		if (nb % k == 0)
		   return (0);
		k++;	
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int num;
	int i;
	int sum;

	sum = 0;
	i = 2;
	if (argc != 2 || argv[1][0] == '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	num = ft_atoi(argv[1]);
	if (!(num > 0))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (num == 1)
	{
		write(1, "1\n", 2);
		return (0);
	}
	while (i <= num)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnb(sum);
	write (1, "\n", 1);
	return (0);
}
