/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/26 15:35:39 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	char		*s;
	char		**str;
	int			d[8];

	d[0] = 0;
	d[4] = 0;
	d[1] = 0;
	va_start(ap, format);
	s = ft_strdup(format);
	if ((str = ft_check(s, ap)) == NULL)
		return (-1);
	ft_solution(d, s, str);
	ft_strclr(s);
	free(s);
	free(str);
	s = NULL;
	str = NULL;
	va_end(ap);
	return (d[0]);
}
