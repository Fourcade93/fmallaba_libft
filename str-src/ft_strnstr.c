/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:32:49 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/04 16:15:09 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t len)
{
	size_t	n;

	if (!*b)
		return ((char*)a);
	n = ft_strlen(b);
	while (len)
	{
		if (len < n)
			return (0);
		else if (ft_strncmp(a, b, n) == 0)
			return ((char*)a);
		a++;
		len--;
	}
	return (0);
}
