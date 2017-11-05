/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:32:49 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/05 18:57:05 by fmallaba         ###   ########.fr       */
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
			return (NULL);
		else if (a[0] == b[0] && ft_strncmp(a, b, n) == 0)
			return ((char*)a);
		a++;
		len--;
	}
	return (NULL);
}
