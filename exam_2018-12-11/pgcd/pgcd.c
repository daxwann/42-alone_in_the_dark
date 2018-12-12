/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 10:40:30 by exam              #+#    #+#             */
/*   Updated: 2018/12/11 10:53:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int num1;
	int num2;
	int	denom;
	int	i;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (num1 == 0 || num2 == 0)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	denom = 1;
	while (i <= num1 && i <= num2)
	{
		if (num1 % i == 0 && num2 % i == 0)
			denom = i;
		i++;
	}
	printf("%d\n", denom);
	return (0);
}
