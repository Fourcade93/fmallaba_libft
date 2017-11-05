/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:56:40 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/05 18:22:20 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	size_t	i;

	tmp = ft_strnew(ft_strlen(s) + 1);
	i = 0;
	if (tmp)
		while (*s)
			tmp[i++] = f(*s++);
	else
		return (NULL);
	tmp[i] = '\0';
	return (tmp);
}
