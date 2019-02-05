/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 09:25:17 by exam              #+#    #+#             */
/*   Updated: 2019/02/05 09:58:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char	*str1;
	char	*str2;
	int		i1;
	int		i2;
	int		repeated;

	if (argc != 3 || argv[1][0] == '\0' || argv[2][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	str1 = argv[1];
	str2 = argv[2];
	i1 = 0;
	while (str1[i1])
	{
		i2 = 0;
		repeated = 0;
		while (i2 < i1 && repeated == 0)
		{
			if (str1[i2] == str1[i1])
				repeated = 1;
			i2++;
		}
		if (repeated == 0)
		{
			i2 = 0;
			while (str2[i2])
			{
				if (str2[i2] == str1[i1])
				{
					write(1, &str1[i1], 1);
					break;
				}
				i2++;
			}
		}
		i1++;
	}
	write(1, "\n", 1);
	return (0);
}
