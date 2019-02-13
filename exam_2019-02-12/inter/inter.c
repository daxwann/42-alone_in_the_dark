/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 09:34:21 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 09:51:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int repeat;

	if (argc != 3 || argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		repeat = 0;
		while (j < i)
		{
			if (argv[1][j] == argv[1][i])
			{
				repeat = 1;
				break;
			}
			j++;
		}
		if (repeat == 0)
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					write(1, &argv[1][i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
