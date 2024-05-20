/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:33:44 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 20:41:14 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	a;
	size_t	b;
	char	*punt;

	b = 0;
	punt = malloc(ft_strlen(s1) + 1);
	if (!punt)
		return (punt);
	while (s1[a])
	{
		while (s1[a] != *set /* pa luego*/
		if (s1[a] != *set)
		{
			punt[b] = s1[a];
			b++;
		}
		a++;
	}
	set++;
	punt[b] = '\0';
	return (punt);
}
