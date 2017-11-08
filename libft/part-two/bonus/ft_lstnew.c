/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 18:31:32 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/05 19:25:12 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	size_t	nsize;
	void	*ncontent;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		ncontent = ft_memalloc(content_size);
		nsize = content_size;
		ncontent = ft_memcpy(ncontent, content, content_size);
		new->content = ncontent;
		new->content_size = nsize;
	}
	new->next = NULL;
	return (new);
}
