/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:55:18 by amokgohl          #+#    #+#             */
/*   Updated: 2018/08/13 17:17:17 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strsub(char const *s, size_t start, size_t len)
{
	char *ret;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + start, len));
}
