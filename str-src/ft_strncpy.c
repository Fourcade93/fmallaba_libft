/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:21:59 by fmallaba          #+#    #+#             */
/*   Updated: 2017/10/28 19:48:52 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;

	ret = dest;
	while (n--)
	{
		if (!*dest || !*src)
		{
			while (n--)
				*dest++ = '\0';
			return (ret);
		}
		*dest++ = *src++;
	}
	return (ret);
}
