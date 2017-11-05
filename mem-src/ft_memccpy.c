/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 05:07:54 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/05 18:42:33 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int ch, size_t len)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	unsigned int		i;

	pdest = (unsigned char*)dest;
	psrc = (const unsigned char*)src;
	i = 0;
	while (len--)
	{
		*pdest = *psrc;
		if (*psrc == (unsigned char)ch)
			return (pdest);
		pdest++;
		psrc++;
	}
	return (NULL);
}
