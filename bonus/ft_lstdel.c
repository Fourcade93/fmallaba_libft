/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 21:42:56 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/03 21:47:13 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*buf;

	tmp = (*alst);
	if (tmp)
		while (tmp)
		{
			buf = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp->next);
			tmp = buf;
		}
}
