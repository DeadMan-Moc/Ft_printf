/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:57:08 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/19 12:11:10 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;

	if (!(str = ft_strnew(n)))
	{
		return (NULL);
	}
	ft_strncpy(str, s1, n);
	return (str);
}
