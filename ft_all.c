/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/26 14:39:54 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_all(va_list ap)
{
	wchar_t	*temp;
	char	*tab[3];
	int		i;

	temp = va_arg(ap, wchar_t *);
	if (!(tab[0] = NULL) && temp == NULL)
		return ((tab[0] = ft_strdup("(null)")));
	if (!(i = 0) && *temp == '\0')
		return (tab[0] = ft_strdup(""));
	while (temp[i])
	{
		tab[1] = ft_itoabase((unsigned)temp[i++], 2);
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
	char *temp;

	temp = va_arg(ap, char *);
	if (temp != NULL)
		tab = ft_strdup(temp);
	else
		tab = ft_strdup("(null)");
	return (tab);
}

int		ft_widelen(char *tab, int *t)
{
	char	*temp;
	int		len;
	int		i;

	i = 0;
	len = 0;
	temp = NULL;
	temp = ft_itoabase((unsigned char)tab[i++], 2);
	{
		while (i <= t[5] && tab[i])
		{
			ft_strclr(temp);
			free(temp);
			temp = ft_itoabase((unsigned char)tab[i], 2);
			if (temp[0] == '1' && temp[1] == '1')
				len = i;
			i++;
		}
	}
	ft_strclr(temp);
	free(temp);
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
