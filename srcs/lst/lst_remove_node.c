/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_remove_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao  <isel-jao@student.42.f>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:04:50 by isel-jao          #+#    #+#             */
/*   Updated: 2021/03/17 13:28:27 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lst_remove_node(t_list **list)
{
	t_list *tmp;

	if (!list)
		return;
	ft_free((*list)->content);
	tmp = *list;
	if (!(*list)->prev )
	{
		*list = (*list)->next;
		(*list)->prev = tmp->prev;
		free(tmp);
		return;
	}
	*list = (*list)->prev;
	(*list)->next = tmp->next;
	free(tmp);
}