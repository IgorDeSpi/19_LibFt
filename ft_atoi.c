/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:22:57 by ide-spir          #+#    #+#             */
/*   Updated: 2022/01/11 11:45:14 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	short			n;
	unsigned char	digit;

	res = 0;
	n = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		n = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		digit = *str++ - '0';
		if (digit > 9)
			break ;
		res = res * 10 + digit;
		if (res > 2147483647 && n == 1)
			return (-1);
		if (res > 2147483648 && n == -1)
			return (0);
	}
	return (n * res);
}
