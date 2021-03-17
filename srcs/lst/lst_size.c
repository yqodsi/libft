/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao  <isel-jao@student.42.f>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:56:25 by isel-jao          #+#    #+#             */
/*   Updated: 2021/03/17 13:13:24 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *list)
{
	int i;

	i = 0;
	if (!list)
		return (0);
	while (list->next)
		list = list->next;
	while (list->prev && ++i)
		list = list->prev;
	return (i);
}