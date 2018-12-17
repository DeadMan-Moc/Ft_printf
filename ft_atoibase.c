/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoibase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 09:09:04 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/19 13:16:21 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoibase(const char *s, int base)
{
	unsigned char		*str;
	int					i;
	int					sign;
	int					results;

	i = 0;
	sign = 0;
	results = 0;
	str = (unsigned char *)s;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-')
		sign = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= (base - 1) + '0')
	{
		results *= base;
		results += (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-results);
	else
		return (results);
}
