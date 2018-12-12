/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 10:08:29 by exam              #+#    #+#             */
/*   Updated: 2018/12/11 10:18:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	letter;
	int		index;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		index = 1;
		letter = argv[1][i];
		if (letter >= 'a' && letter <= 'z')
			index = letter - 'a' + 1;
		else if (letter >= 'A' && letter <= 'Z')
			index = letter - 'A' + 1;
		while (index > 0)
		{
			write(1, &letter, 1);
			index--;
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
