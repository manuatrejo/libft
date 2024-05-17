/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:38:10 by manguita          #+#    #+#             */
/*   Updated: 2024/05/15 20:05:46 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;
	unsigned int		a;

	a = 0;
	string1 = (const unsigned char *)s1;
	string2 = (const unsigned char *)s1;
	while (n > 0 && string1[a] == string2[a])
	{
		n--;
		a++;
	}
	return (string1[a] - string2[a]);
}