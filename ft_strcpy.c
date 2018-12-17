/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:37:49 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/11 15:53:49 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i += 1;
		}
	}
	dst[i] = '\0';
	return (dst);
}
