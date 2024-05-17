/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:55:58 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 20:03:27 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	a = 0;
	while (str[a] == ' ' || str[a] == '\f' || str[a] == '\n'
		|| str[a] == '\r' || str[a] == '\t' || str[a] == '\v')
		a++;
	if (str[a] == '-')
		result *= -1;
	if (str[a] == '+' || str[a] == '-')
		a++;
	while (str[a] >= '0' && str[a] <= '9')
	{
		if (result > INT_MAX)
			return (0);
		result *= 10;
		result += str[a] - '0';
		a++;
	}
	return (sign * result);
}
