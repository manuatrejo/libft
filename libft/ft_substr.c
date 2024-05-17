/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:15:35 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 20:20:44 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a;

	a = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (len > 0 && s[start + a] != '\0')
	{
		str[a] = s[start + a];
		a++;
		len--;
	}
	str[a] = '\0';
	return (str);
}
