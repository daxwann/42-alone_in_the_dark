/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:19:23 by exam              #+#    #+#             */
/*   Updated: 2018/10/02 12:10:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	char *arr;
	int len;
	int temp;
	int neg;
	
	neg = 0;
	len = 0;
	if (value < 0 && base == 10)
	{
		neg = 1;
		len++;
	}
	if (value == -2147483648)
		return ("-2147483648");
	if (value < 0)
		value *= -1;
	temp = value;
	while (temp / base != 0)
	{
		temp /= base;
		len++;
	}
	len++;
	arr = (char*)malloc(sizeof(*arr) * (len + 1));
	arr[len--] = '\0';
	while (value / base != 0)
	{
		if (value % base < 10)
			arr[len--] = value % base + '0';
		else
			arr[len--] = value % base - 10 + 'A';
		value /= base;
	}
	if (value / base == 0 && value % base < 10)
		arr[len--] = value % base + '0';
	else if (value / base == 0 && value % base >= 10)
		arr[len--] = value % base - 10 + 'A';
	if (neg == 1)
		arr[len] = '-';
	return (arr);
}
