/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 17:21:52 by fmallaba          #+#    #+#             */
/*   Updated: 2017/10/31 17:50:09 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	i;

	tmp = ft_strnew(ft_strlen(s));
	i = 0;
	while (*s)
	{
		tmp[i] = f(i, *s++);
		i++;
	}
	return (tmp);
}
