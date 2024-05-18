/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:05:17 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 19:08:16 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	length;

	length = 0;
	while (*src && n > 1)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
		length++;
	}
	if (n >= 1)
		*dst = '\0';
	return (length);
}
