/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:52:28 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/11 16:11:28 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char	tmp;

	i = 0;
	n = ft_strlen(str);
	while (n - 1 > i)
	{
		tmp = str[i];
		str[i] = str[n - 1];
		str[n - 1] = tmp;
		n--;
		i++;
	}
	return (str);
}
