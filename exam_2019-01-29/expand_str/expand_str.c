/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 09:42:25 by exam              #+#    #+#             */
/*   Updated: 2019/01/29 10:06:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_whitespace(char c)
{
	if ((c > 8 && c < 14) || c == ' ')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char *str;
	int exp;

	exp = 0;
	if (argc != 2 || !argv[1] || argv[1][0] == '\0')
	{
		write (1, "\n", 1);
		return (0);
	}
	str = argv[1];
	while (*str && is_whitespace(*str))
	   str++;
	while (*str)
	{
		if (is_whitespace(*str))
			exp = 1;
		else if (exp)
		{
			write(1, "   ", 3);
			write(1, str, 1);
			exp = 0;
		}
		else
		{
			write(1, str, 1);
			exp = 0;
		}
		str++;
	}
	write(1, "\n", 1);	
	return (0);
}
