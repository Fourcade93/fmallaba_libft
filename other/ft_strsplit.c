/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 22:19:45 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/04 19:51:25 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
		if (*s++ != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	return (i);
}


static char		*create_str(char const *s, char c)
{
	size_t	len;
	char	*str;

	len = 0;
	while (*s && *s++ != c)
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	return (str);
}

static char		**add_str(char **arr, char const *s, char c)
{
	size_t	s_pos;
	size_t	num_of_str;
	size_t	num_of_symb;

	s_pos = 0;
	num_of_str = 0;
	while(s[s_pos])
	{
		if (s[s_pos] != c)
		{
			num_of_symb = 0;
			arr[num_of_str] = create_str(&s[s_pos], c);
			if (!arr[num_of_str])
				return (NULL);
			while (s[s_pos] && s[s_pos] != c)
				arr[num_of_str][num_of_symb++] = s[s_pos++];
			arr[num_of_str][num_of_symb] = '\0';
			s_pos--;
			num_of_str++;
		}
		s_pos++;
	}
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;

	if (!*s)
	{
		arr = (char**)malloc(sizeof(char*));
		arr[0] = (char*)malloc(sizeof(char));
		arr[0][0] = '\0';
		return (arr);
	}
	else
		arr = (char**)malloc(sizeof(char*) * count_word(s, c));
	if (arr)
		arr = add_str(arr, s, c);
	else
		return (NULL);
	return (arr);
}
	
