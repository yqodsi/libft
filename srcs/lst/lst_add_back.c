/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao  <isel-jao@student.42.f>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:03:06 by isel-jao          #+#    #+#             */
/*   Updated: 2021/03/17 13:03:23 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lst_add_back(t_list **list, t_list *new)
{
	if (!new)
		return (NULL);
	if (!(*list))
	{
		*list = new;
		return (*list);
	}
	while ((*list)->next)
		*list = (*list)->next;
	(*list)->next = new;
	new->prev = *list;
	*list = new;
	return (*list);
}