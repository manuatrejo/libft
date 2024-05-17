/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:53:18 by manguita          #+#    #+#             */
/*   Updated: 2024/05/17 21:37:06 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *hay, size_t len)
{
	int	a;
	int	b;

	a = 0;
	if (hay[a] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && len - a > 0)
	{
		b = 0;
		while (haystack[a + b] == hay[a + b] && len - a - b > 0)
		{
			if (hay[a + b] == '\0')
				return ((char *)&hay[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}
