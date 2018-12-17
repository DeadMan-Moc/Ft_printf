/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblen_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 11:19:25 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/07 13:59:55 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_nblen_base(long long n, int base)
{
	int			len;
	long double	pow;

	pow = 1;
	len = 0;
	if (n < 0)
		len++;
	if (n < 0)
		n *= -1;
	while (n >= (pow *= base))
		len++;
	return (len + 1);
}

int		ft_unblen_base(uintmax_t i, int base)
{
	int			length;
	long double	pow;

	pow = 1;
	length = 0;
	while (i >= (pow *= base))
		length++;
	return (length + 1);
}
