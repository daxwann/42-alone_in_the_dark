/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 12:16:53 by exam              #+#    #+#             */
/*   Updated: 2018/12/11 12:32:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRACKETS_H
# define BRACKETS_H
# include <string.h>
# include <unistd.h>

int		match_bracket(char open, char close);
char	*check_brackets(char *str);

#endif
