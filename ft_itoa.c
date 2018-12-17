/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 13:13:38 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/19 13:13:53 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;
	int		len;

	i = 0;
	nb = n;
	if (n < 0)
		nb = -nb;
	len = ft_nblen(nb);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1 + (n < 0)))))
		return (NULL);
	if (nb == 0)
		return (ft_strcpy(str, "0"));
	while (nb != 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
