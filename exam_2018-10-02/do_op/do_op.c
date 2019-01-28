/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 09:26:04 by exam              #+#    #+#             */
/*   Updated: 2018/10/02 09:45:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "do_op.h"

int main(int argc, char **argv)
{
	int a;
	int b;
	char o;

	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	o = argv[2][0];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (o == '+')
		ft_add(a, b);
	else if (o == '-')
		ft_minus(a, b);
	else if (o == '*')
		ft_times(a, b);
	else if (o == '/')
		ft_divide(a, b);
	else if (o == '%')
		ft_mod(a, b);
	return (0);
}
