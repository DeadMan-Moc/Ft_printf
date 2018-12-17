/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length_lu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:05:07 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/26 16:31:34 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long int	ft_length_lu(unsigned long nbr)
{
	long int digit;

	digit = 0;
	if (!nbr)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		digit++;
	}
	return (digit);
}
