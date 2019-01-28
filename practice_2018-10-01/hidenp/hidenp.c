/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 23:50:57 by xwang             #+#    #+#             */
/*   Updated: 2018/10/01 00:04:30 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int k;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	k = 0;
	while (argv[2][i])
	{
		if (argv[1][k] == argv[2][i])
			k++;
		if (argv[1][k] == '\0')
		{
			write(1, "1\n", 2);
			return (0);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}
