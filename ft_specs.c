/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/26 16:12:52 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convh(char *s, va_list ap, int i)
{
	char *tab;

	tab = NULL;
	while (ft_testpass(s, i))
		i += 1;
	if (s[i] == 'h' && (i += 1))
		return (ft_convhh(s, ap, i));
	if (s[i] == 'D')
		return (ft_longlong(s, ap, i));
	if (s[i] == 'i' || s[i] == 'd')
		tab = ft_itoa((short)va_arg(ap, int));
	else if (s[i] == 's' || s[i] == 'c' || s[i] == 'C'
	|| s[i] == 'p' || s[i] == '%')
		tab = ft_checksimp(s, ap, i);
	else if (s[i] == 'X')
		tab = stup(ft_itoshort(va_arg(ap, unsigned), 16));
	else if (s[i] == 'x')
		tab = ft_itoshort(va_arg(ap, unsigned), 16);
	else if (s[i] == 'u')
		tab = ft_itoshort(va_arg(ap, unsigned), 10);
	else if (s[i] == 'U')
		tab = ft_itoabase(va_arg(ap, long unsigned), 10);
	else if (s[i] == 'o' || s[i] == 'O')
		tab = ft_itoshort(va_arg(ap, unsigned), 8);
	return (tab);
}

char	*ft_convhh(char *s, va_list ap, int i)
{
	char *tab;

	tab = NULL;
	while (ft_testpass(s, i))
		i += 1;
	if (s[i] == 'D')
		return (ft_longlong(s, ap, i));
	if (s[i] == 'i' || s[i] == 'd')
		tab = ft_itoabase((char)va_arg(ap, int), 10);
	else if (s[i] == 's' || s[i] == 'c' || s[i] == 'C'
	|| s[i] == 'p' || s[i] == '%')
		tab = ft_checksimp(s, ap, i);
	else if (s[i] == 'x')
		tab = ft_itoshort((unsigned char)va_arg(ap, int), 16);
	else if (s[i] == 'X')
		tab = stup(ft_itoshort((unsigned char)va_arg(ap, int), 16));
	else if (s[i] == 'u')
		tab = ft_itoabase((unsigned char)va_arg(ap, int), 10);
	else if (s[i] == 'U')
		tab = ft_itoabase(va_arg(ap, uintmax_t), 10);
	else if (s[i] == 'o')
		tab = ft_itoshort((unsigned char)va_arg(ap, int), 8);
	else if (s[i] == 'O')
		tab = ft_itoshort((unsigned)va_arg(ap, int), 8);
	return (tab);
}

char	*ft_convj(char *s, va_list ap, int i)
{
	char *tab;

	tab = NULL;
	while (ft_testpass(s, i))
		i += 1;
	if (s[i] == 'i' || s[i] == 'd' || s[i] == 'D')
		tab = ft_itoabase(va_arg(ap, intmax_t), 10);
	else if (s[i] == 's' || s[i] == 'c' || s[i] == 'C' || s[i] == '%')
		tab = ft_checksimp(s, ap, i);
	else if (s[i] == 'X')
		tab = stup(ft_itohex(va_arg(ap, uintmax_t)));
	else if (s[i] == 'x')
		tab = ft_itohex(va_arg(ap, uintmax_t));
	else if (s[i] == 'p')
		tab = ft_itohex(va_arg(ap, uintmax_t));
	else if (s[i] == 'u' || s[i] == 'U')
		tab = ft_itoalong_u(va_arg(ap, uintmax_t));
	else if (s[i] == 'o' || s[i] == 'O')
		tab = ft_itoaoct(va_arg(ap, uintmax_t));
	return (tab);
}

char	*ft_sizeint(char *s, va_list ap, int i)
{
	char *tab;

	tab = NULL;
	while (ft_testpass(s, i))
		i++;
	if (s[i] == 'D')
		return (ft_longlong(s, ap, i));
	if (s[i] == 'i' || s[i] == 'd')
		tab = ft_itoabase(va_arg(ap, ssize_t), 10);
	else if (s[i] == 's' || s[i] == 'c' || s[i] == 'C' || s[i] == '%')
		tab = ft_checksimp(s, ap, i);
	else if (s[i] == 'X')
		tab = stup(ft_itohex(va_arg(ap, size_t)));
	else if (s[i] == 'x')
		tab = ft_itohex(va_arg(ap, size_t));
	else if (s[i] == 'p')
		tab = ft_itohex(va_arg(ap, size_t));
	else if (s[i] == 'u' || s[i] == 'U')
		tab = ft_itoalong_u(va_arg(ap, size_t));
	else if (s[i] == 'o' || s[i] == 'O')
		tab = ft_itoaoct(va_arg(ap, size_t));
	return (tab);
}

char	*ft_longlong(char *s, va_list ap, int i)
{
	char *tab;

	tab = NULL;
	while (ft_testpass(s, i))
		i += 1;
	if (s[i] == 'i' || s[i] == 'd' || s[i] == 'D')
		tab = ft_itoabase(va_arg(ap, intmax_t), 10);
	else if (s[i] == 's' || s[i] == 'c' || s[i] == 'C' || s[i] == '%')
		tab = ft_checksimp(s, ap, i);
	else if (s[i] == 'p')
		tab = ft_itohex(va_arg(ap, long long));
	else if (s[i] == 'X')
		tab = stup(ft_itohex(va_arg(ap, unsigned long long)));
	else if (s[i] == 'x')
		tab = ft_itohex(va_arg(ap, unsigned long long));
	else if (s[i] == 'u' || s[i] == 'U')
		tab = ft_itoalong_u(va_arg(ap, unsigned long long));
	else if (s[i] == 'o' || s[i] == 'O')
		tab = ft_itoaoct(va_arg(ap, unsigned long long));
	return (tab);
}
