/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:25:37 by exam              #+#    #+#             */
/*   Updated: 2018/10/30 09:51:05 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
		i++;
	if (i != 0)
		i--;
	while (argv[1][i] > 0 && argv[1][i] < 33)
		i--;
	while (argv[1][i] > 32 && argv[1][i] < 127)
		i--;
	if (argv[1][i] != '\0')
		i++;	
	while (argv[1][i] > 32 && argv[1][i] < 127)
	{
		write(1, &argv[1][i], 1);
		i++;
	}	
	write(1, "\n", 1);
	return (0);
}
