#include "ft_libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;

	i = 0;
	src = (char *)s;
    while (src[i] != '\0' && i < n)
    {
        if (src[i] == c)
            return (src);
        i++;
    }
    return (NULL);
}