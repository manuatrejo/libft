/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:58:52 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 21:05:15 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	intlength(int n)
{
	int	length;
	int	aux;

	aux = n;
	length = 0;
	if (aux < 0)
	{	
		aux *= -1;
		length++;
	}
	if (aux == 0)
		return (1);
	while (aux > 0)
	{
		aux /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	a;
	size_t	b;
	char	*punt;

	a = 0;
	b = intlength(n);
	punt = (char *)malloc(b + 1);
	if (!punt)
		return (NULL);
	if (n < 0)
		punt[0] = '-';
	if (n == 0)
		punt[0] = '0';
	while (n != 0)
	{
		punt[(b - 1) - a] = n % 10 + '0';
		n /= 10;
		a++;
	}
	punt[b] = '\0';
	return (punt);
}
