/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:52:06 by ide-spir          #+#    #+#             */
/*   Updated: 2022/01/10 11:55:30 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	count;

	if (!s)
		return (0);
	count = 0;
	count += ft_pustr_fd(s, fd);
	count += ft_putchar_fd('\n', fd);
	return (count);
}
