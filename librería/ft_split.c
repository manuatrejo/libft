/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:43:53 by manguita          #+#    #+#             */
/*   Updated: 2024/05/17 21:16:01 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static int	nstrings(const char *s, char c)
{
	int	count;
	int	a;

	count = 0;
	a = 0;
	if (!*s)
		return (0);
	while (s[a])
	{
		if (s[a] == c)
			count++;
		while (s[a + 1] == c)
			a++;
		a++;
	}
	if (s[0] != c)
		count++;
	return (count);
}

static int	sslen(const char *s, char c)
{
	int	length;
	int	b;

	b = 0;
	length = 0;
	while (s[b] && s[b] != c)
	{
		length++;
		b++;
	}
	while (s[b] == c)
		b++;
	return (length);
}

static char	**freeft(char **array, int x)
{
	while (x > 0)
	{
		x--;
		free(array[x]);
	}
	free(array);
	return (NULL);
}

static char	**stringss(char **array, const char *s, int n, char c)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	z = 0;
	while (x < n && s[z])
	{
		array[x] = (char *)malloc(sizeof(char *) * (sslen(s, c) + 1));
		if (!array[x])
			return (freeft(array, x));
		y = 0;
		while (s[z] != '\0' && s[z] != c)
		{
			array[x][y] = s[z];
			y++;
			z++;
		}
		while (s[z] == c)
			z++;
		array[x][y] = '\0';
		x++;
	}
	array[x] = 0;
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	n;

	n = nstrings(s, c);
	array = (char **)malloc(sizeof(char **) * n);
	if (!array)
		return (NULL);
	return (stringss(array, s, n, c));
}
