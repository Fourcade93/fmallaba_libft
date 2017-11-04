/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 15:16:46 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/01 16:50:37 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	tmp = (char*)malloc(sizeof(char) * len);
	i = 0;
	if (tmp)
		while (len--)
			tmp[i++] = s[start++];
	else
		return (NULL);
	return (tmp);
}
