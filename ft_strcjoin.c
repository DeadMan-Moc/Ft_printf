/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/19 11:03:14 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strcjoin(char const *s1, char const s2)
{
	char	*str;
	int		len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	str = ft_strcpy(str, s1);
	str[len] = s2;
	return (str);
}
