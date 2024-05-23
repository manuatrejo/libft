/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:01:36 by manguita          #+#    #+#             */
/*   Updated: 2024/05/23 23:33:34 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	*temp;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	temp = malloc(n);
	if (!temp)
		return (temp);
	while (n > i)
	{
		temp[i] = a[i];
		i++;
	}
	i = 0;
	while (n > i)
	{
		b[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
