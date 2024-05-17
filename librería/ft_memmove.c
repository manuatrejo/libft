/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:01:36 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 19:04:12 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*a;
	char	*b;
	char	*temp;
	size_t	n1;

	n1 = 0;
	a = (char *)src;
	b = (char *)dest;
	while (n > n1)
	{
		*temp = *a;
		a++;
		temp++;
		n1++;
	}
	while (n > 0)
	{
		*b = *temp;
		b++;
		temp++;
		n--;
	}
	return (dest);
}
