/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoalong_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:40:26 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/19 12:56:45 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_all(va_list ap)
{
	wchar_t	*tmp;
	char	*tab[3];
	int		i;

	tmp = va_arg(ap, wchar_t *);
	if (!(tab[0] = NULL) && tmp == NULL)
		return ((tab[0] = ft_strdup("(null)")));
	if (!(i = 0) && *tmp == '\0')
		return (tab[0] = ft_strdup(""));
	while (tmp[i])
	{
		tab[1] = ft_itoabase((unsigned)tmp[i++], 2);
		tab[2] = ft_bintoa(tab[1]);
		if (!tab[0])
			tab[0] = ft_strdup(tab[2]);
		else
		{
			tab[1] = tab[0];
			tab[0] = ft_strjoin(tab[1], tab[2]);
			free(tab[1]);
		}
		ft_strclr(tab[2]);
		free(tab[2]);
	}
	return (tab[0]);
}

char	*ft_stocksimps(char *tab, va_list ap)
{
	char *tmp;

	tmp = va_arg(ap, char *);
	if (tmp != NULL)
		tab = ft_strdup(tmp);
	else
		tab = ft_strdup("(null)");
	return (tab);
}

int		ft_widelen(char *tab, int *t)
{
	char	*tmp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	tmp = NULL;
	tmp = ft_itoabase((unsigned char)tab[i++], 2);
	{
		while (i <= t[5] && tab[i])
		{
			ft_strclr(tmp);
			free(tmp);
			tmp = ft_itoabase((unsigned char)tab[i], 2);
			if (tmp[0] == '1' && tmp[1] == '1')
				len = i;
			i++;
		}
	}
	ft_strclr(tmp);
	free(tmp);
	return (len);
}

void	ft_putnsstr(char *tab, int *t, int *d)
{
	int		i;
	int		len;

	i = 0;
	len = ft_widelen(tab, t);
	while (i < len && tab[i])
	{
		ft_putchar(tab[i++]);
		d[0]++;
	}
}
