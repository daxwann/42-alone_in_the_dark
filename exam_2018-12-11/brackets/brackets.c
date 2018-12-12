/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 11:44:04 by exam              #+#    #+#             */
/*   Updated: 2018/12/11 12:36:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

int	match_bracket(char open, char close)
{
	if (open == '[' && close == ']')
		return (1);
	if (open == '(' && close == ')')
		return (1);
	if (open == '{' && close == '}')
		return (1);
	return (0);
}

char	*check_brackets(char *str)
{
	while (*str)
	{
		if (*str == ')' || *str == ']' || *str == '}')
			return (str);
		if (*str == '(' || *str == '[' || *str == '{')
		{
			if (match_bracket(*str, *check_brackets(str + 1)) == 1)
				str = check_brackets(str + 1);
			else
				return ("2");
		}
		str++;	
	}
	return ("1");
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (argv[i] == NULL)
			write(1, "Error\n", 6);
		else if (*check_brackets(argv[i]) == '1')
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
		i++;
	}
	return (0);
}
