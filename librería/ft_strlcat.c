/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:09:14 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 19:10:38 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	a;
	size_t	b;
	size_t	dstlen;

	a = 0;
	b = 0;
	dstlen = ft_strlen(dst);
	while (dst[a] && n > 1)
	{
		a++;
		n--;
	}
	while (src[b] && n > 1)
	{
		dst[a] = src[b];
		b++;
		a++;
		n--;
	}
	if (n != 0)
		*dst = '\0';
	return (dstlen + ft_strlen(src));
}
