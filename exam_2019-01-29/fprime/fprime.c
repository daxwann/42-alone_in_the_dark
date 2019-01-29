/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 10:20:17 by exam              #+#    #+#             */
/*   Updated: 2019/01/29 10:58:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nb)
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
	int num;
	int ast;
	int factor;

	ast = 0;
	factor = 3;
	if (argc != 2 || !argv[1] || argv[1][0] == '\0')
	{
		printf("\n");
		return (0);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("\n");
		return (0);
	}
	if (num < 2)
	{
		printf("%d\n", num);
		return (0);
	}
	while (num % 2 == 0)
	{
		if (ast)
			printf("*");
		printf("2");
		num = num / 2;
		ast = 1; 
	}
	while (factor <= num)
	{
		if (is_prime(factor))
		{
			while (num % factor == 0)
			{
				if (ast)
					printf("*");
				printf("%d", factor);
				num = num / factor;
				ast = 1;
			}
		}
		factor += 2;
	}
	printf("\n");
}
