/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 23:37:01 by isel-jao          #+#    #+#             */
/*   Updated: 2020/10/24 11:41:03 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
