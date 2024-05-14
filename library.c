#include<stdio.h>
#include<stdlib.h>
#include<stddef.h> /*esto para el size_t*/

int ft_isalpha(int a)
{
	return((a >= 65 && a <= 90) || (a >= 97 && a <= 122));
}

int ft_isdigit(int a)
{
	return (a >= 48 && a <= 57);
}

int ft_isalnum(int a)
{
	return (ft_isalpha(a) || ft_isdigit(a));
}

int ft_isascii(int a)
{
	return (a <= 127 && a >= 0);
}

int ft_isprint(int a)
{
	return (a > 32 && a < 127);
}

size_t ft_strlen(const char *s)
{
	size_t	a;
	
	a = 0;
	while (*s++)
		a++;
	return (a);
}

void    *ft_memset(void *s, int c, size_t n)
{
	unsigned char *memoria_s;

	memoria_s = (unsigned char *)s;
	while (n > 0)
	{
		*memoria_s = c;
		memoria_s++;
		n--;
	} 
	return (s);
}

void    *ft_bzero(void *s, size_t n)
{
	char *memoria_s = (char *)s;
	while (n > 0)
	{
		*memoria_s = 0;
		memoria_s++;
		n--; 
	}
}

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *a = (char *)src;
	char *b = (char *)dest;
	
	while (n > 0)
	{
		*b = *a;
		a++;
		b++;
		n--;
	}
	return (dest);
}
void    *ft_memmove(void *dest, const void *src, size_t n)
{
	char *a = (char *)src;
	char *b = (char *)dest;
	char *temp;
	size_t n1;

	n1 = 0;
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

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t length;

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
		{
			*dst = '\0';
			length++;
		}
	return (length);
}

size_t ft_strlcat(char *dst, const char *src, size_t n)
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

int ft_toupper(int c)
{
	if (c < 123 && c > 96)
		c -= 32;
	return (c);
}

int ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

char *ft_strchr(const char *s, int c)
{
	int a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
			return (&s[a]);
		a++; 
	}
	return (NULL);
}

char *ft_strrchr(const char *s, int c)
{
	int a;

	a = 0;
	while (s[a])
		a++;
	while (a > -1)
	{
		if (s[a] == c)
			return (&s[a]);
		a--;
	}
	return (NULL);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int a;

	a = 0;
	while (a < n && *s1 && *s2 && *s1 == *s2)
	{
		a++;
		s1++;
		s2++;
	} 
	return (*s1 - *s2);
}

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n > 0)
	{
		if (c == *a)
			return ((void *)s);
		n--;
		a++;
	}
	return (NULL);
}
 
int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	const unsigned char *string1;
	const unsigned char *string2;
	int a;

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

char	*ft_strnstr(const char *haystack, const char *hay, size_t len)
{
	int	a;
	int	b;

	a = 0;
	if (hay[a] == '\0')
		return (*haystack);
	while (haystack[a] != '\0' && len - a > 0)
	{
		b = 0;
		while (haystack[a + b] == hay[a + b] && len - a - b > 0)
		{
			if (hay[a + b] == '\0')
				return (&hay[a]);
			b++;
		}
		a++;
	}
	return (NULL);
}

#include<limits.h>
int ft_atoi(const char *str)
{
	int a;
	int result;
	int sign;

	sign = 1;
	result = 0;
	a = 0;
	while (str[a] == ' ' || str[a] == '\f' || str[a] == '\n'
		|| str[a] == '\r' || str[a] == '\t' || str[a] == '\v')
	a++;
	if (str[a == '-'])
		result *= -1;
	if (str[a] == '+' || str[a] == '-')
	a++;
	while (str[a] >= '0' && str[a] <= '9')
	{
		if (result > INT_MAX)
			return (0);
		result *= 10;
		result += str[a] - '0';
		a++;
	}
	return (sign * result);
}

void *ft_calloc(size_t number, size_t size)
{
	void    *punt;

	punt = malloc(number * size);
	if (punt)
	{
		ft_bzero(punt, (number * size));
		return (punt);
	}
	return (NULL);
}

char *ft_strdup(const char *s)
{
	char   *punt;
	size_t a;

	a = 0;
	punt = malloc(ft_strlen(s) + 1);
	if (!punt)
		return (NULL);
	while (s[a] != '\0')
	{
		punt[a] = s[a];
		a++;
	}
	punt[a] = '\0';
	return (punt);
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char    *str;
	size_t  a;

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

char *ft_strjoin(const char *s1, const char *s2)
{
	char    *punt;
	size_t  a;

	a = 0;
	punt = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!punt)
		return (punt);
	while (*s1)
	{
		punt[a] = *s1;
		s1++;
		a++;
	}
	while (*s2)
	{
		punt[a] = *s2;
		s2++;
		a++;
	}
	punt[a] = '\0';
	return (punt);
}

char *ft_strtrim(const char *s1, const char *set)
{
	size_t  a;
	size_t  b;
	char	*punt;

	b = 0;
	punt = malloc(ft_strlen(s1) + 1);
	if (!punt)
		return (punt);
	while (*set)
	{
		a = 0;
		while (s1[a] != '\0')
		{
			if (s1[a] != *set)
			{
				punt[b] = s1[a]; 
				b++;
			}
			a++;
		}
		set++;
	}
	punt[b] = '\0';
	return (punt);
}

int	nstrings(const char *s, char c)
{
	int	count;
	int	a;

	count = 1;
	a = 0;
	if (!*s)
		return (0);
	while (s[a] != '\0')
	{
		if (s[a] == c)
			count++;
		while (s[a + 1] == c)
			a++;
		a++;
	}
	return (count);
}

int substrlength(const char *s, char c)
{
	int	length;
	int	b;
	
	b = 0;
	length = 0;
	while (s[b] != '\0' && s[b] != c)
	{
		length++;
		b++;
	}
	return (length);
}

char **freeft(char **array, int x)
{
	while (x > 0)
	{
		x--;
		free(array[x]);
	}
	free(array);
	return (NULL);
}

char **stringss(char **array, char *s, int n, char c)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	z = 0;
	while (x < n && s[z] != '\0')
	{
		array[x] = (char *)malloc(sizeof(char *) * (substrlength(s, c) + 1));/*mirar*/
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

char **ft_split(const char *s, char c)
{
	char	**array;
	int	n;

	n = nstrings(s, c);
	array = (char **)malloc(sizeof(char**) * n);/*mirar*/
	if (!array)
		return (NULL);
	return (stringss(array, s, n, c));
}

int intlength(int n)
{
	int	length;
	int	aux;

	aux = n;
	length = 0;
	if (aux < 0)
	{	aux *= -1;
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

char *ft_itoa(int n)
{
	char	*punt;
	int	a;
	int	b;

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

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char	*punt;

	a = 0;
	if (!s || !f)
		return (NULL);
	punt = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!punt)
		return (NULL);
	while (*s)
	{
		punt[a] = f(a, *s);
		s++;
		a++;
	}
	punt[a] = '\0';
	return (punt);
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	a;

	a = 0;
	if (!s || !f)
		return ;
	while (s[a] != '\0')
	{
		f(a, &s[a]);
		a++;
	}
}

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, &s, 1);
		s++;
	}
}

void ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, &s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

void ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	write (fd, s, ft_strlen(s));
}
hola