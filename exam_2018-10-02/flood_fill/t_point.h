/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_point.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:38:38 by exam              #+#    #+#             */
/*   Updated: 2018/10/02 11:09:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_POINT_H
# define T_POINT_H

typedef struct 	s_point {
    int 		x;				// x : Width  | x-axis
    int 		y;				// y : Height | y-axis
} 				t_point;

void	flood_fill(char **tab, t_point size, t_point begin);

#endif
