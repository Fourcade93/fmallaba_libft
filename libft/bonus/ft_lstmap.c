/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmallaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:54:39 by fmallaba          #+#    #+#             */
/*   Updated: 2017/11/04 15:05:09 by fmallaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*ret;
	t_list	*tmp;

	tmp = lst;
	if (tmp)
	{
		new = f(tmp);
		ret = new;
		tmp = tmp->next;
		while (tmp)
		{
			new->next = f(tmp);
			new = new->next;
			tmp = tmp->next;
		}
	}
	else
		ret = NULL;
	return (ret);
}
