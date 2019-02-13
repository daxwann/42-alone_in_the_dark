/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:55:41 by exam              #+#    #+#             */
/*   Updated: 2019/02/12 12:54:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"
#include <string.h>

int	valid_pair(char open, char close)
{
	if (open == '[' && close == ']')
		return (1);
	if (open == '(' && close == ')')
		return (1);
	if (open == '{' && close == '}')
		return (1);
	return (0);
}

char* brackets(char *str)
{
	char *close;

	while (*str)
	{
		if (*str == ']' || *str == ')' || *str == '}')
			return (str);
		if (*str == '[' || *str == '(' || *str == '{')
		{
			close = brackets(str + 1);
			if (close == NULL)
				return (NULL);
			if (valid_pair(*str, *close))
				str = close;
			else
				return (NULL);	
		}
		str++;
	}
	return ("ok");
}

int	main(int argc, char **argv)
{
	int i;
	char *result;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		result = brackets(argv[i]);
		if (!result || *result == ')' || *result == ']' || *result == '}')
			write(1, "ERROR\n", 6);
		else
			write(1, "OK\n", 3);
		i++;
	}
	return (0);
}
