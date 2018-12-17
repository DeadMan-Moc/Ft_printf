/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaspec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 16:47:11 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/26 14:05:27 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoalong_u(uintmax_t n)
{
	uintmax_t	nbr;
	uintmax_t	i;
	uintmax_t	len;
	char		*str;

	i = 0;
	nbr = n;
	len = ft_length_lu(nbr);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nbr == 0)
		return (ft_strcpy(str, "0"));
	while (nbr != 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}

char	*ft_itoshort(unsigned short int nbr, int base)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = ft_strnew(ft_unblen_base(nbr, base))))
		return (NULL);
	if (nbr == 0)
		return (ft_strcpy(str, "0"));
	while (nbr != 0)
	{
		if (nbr % base <= base - 1)
			str[i] = (nbr % base) + '0';
		if (nbr % base >= 10)
			str[i] = 'a' + ((nbr % base) % 10);
		nbr = nbr / base;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}

char	*ft_itohex(uintmax_t nbr)
{
	char		*str;
	intmax_t	i;

	i = 0;
	if (!(str = ft_strnew(ft_unblen_base(nbr, 16))))
		return (NULL);
	if (nbr == 0)
		return (ft_strcpy(str, "0"));
	while (nbr != 0)
	{
		if (nbr % 16 <= 15)
			str[i] = (nbr % 16) + '0';
		if (nbr % 16 >= 10)
			str[i] = 'a' + ((nbr % 16) % 10);
		nbr = nbr / 16;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}

char	*ft_itoaoct(uintmax_t nbr)
{
	char		*str;
	intmax_t	i;

	i = 0;
	if (!(str = ft_strnew(ft_unblen_base(nbr, 8))))
		return (NULL);
	if (nbr == 0)
		return (ft_strcpy(str, "0"));
	while (nbr)
	{
		str[i] = (nbr % 8) + '0';
		nbr = nbr / 8;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
