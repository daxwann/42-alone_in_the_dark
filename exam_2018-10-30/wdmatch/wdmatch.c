/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:58:41 by exam              #+#    #+#             */
/*   Updated: 2018/10/30 10:10:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *str1;

	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	str1 = argv[1];
	while (*str1)
	{
		while (*argv[2] && *str1 != *argv[2])
			argv[2]++;
		if (*argv[2] != *str1)
		{
			write(1, "\n", 1);
			return (0);
		}
		else
			argv[2]++;
		str1++;
	}
	while (*argv[1])
	{
		write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
