/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/26 15:56:42 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	**ft_tests(char *s, int *i, va_list ap, char **tab)
{
	int y;
	int	z;

	y = i[1];
	while (!ft_alltest(s, &y) && s[y] != '%' && s[y])
	{
		if (s[y] == '*')
		{
			tab[i[2]++] = ft_testcheck(s, y, ap);
			y++;
			i[1] = y;
		}
		y++;
	}
	z = y - 1;
	(ft_alltest(s, &y) || (s[y] == '%' && ft_alltest(s, &z))
	? i[1] = y : 0);
	if ((tab[i[2]] = ft_testcheck(s, i[1], ap)) == NULL)
		free(tab[i[2]--]);
	return (tab);
}
