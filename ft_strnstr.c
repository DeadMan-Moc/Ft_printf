/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amokgohl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:31:55 by amokgohl          #+#    #+#             */
/*   Updated: 2018/06/15 10:55:49 by amokgohl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "frt_printf.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			found;

	i = -1;
	found = 1;
	if (!ft_strlen(lit))
		return ((char *)big);
	while (*(big + ++i) && i < len)
	{
		j = 0;
		if (*(big + i) == *(lit + 0))
		{
			k = i;
			found = 1;
			while (*(big + k) && *(lit + j) && j < len && k < len)
				if (*(big + k++) != *(lit + j++))
					found = 0;
			if (found && !*(lit + j))
				return ((char *)big + i);
		}
	}
	return (NULL);
}
