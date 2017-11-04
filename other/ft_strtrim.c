/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:53:55 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/01 22:18:59 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char const *s)
{
	size_t	i;

	i = 0;
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s)
		s++;
	while (*s)
	{
		s++;
		i++;
	}
	while (i != 0 && s-- && (*s == ' ' || *s == '\n' || *s == '\t'))
		i--;
	return (i);
}


char	*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	i;
	size_t	len;

	i = 0;
	len = get_len(s);
	tmp = (char*)malloc(sizeof(char) * len);
	if (tmp)
	{
		while ((*s == ' ' || *s == '\n' || *s == '\t') && *s)
			s++;
		while (len--)
			tmp[i++] = *s++;
	}
	else
		return (NULL);
	return (tmp);
}
