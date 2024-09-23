#include "ft_libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char	*c1;
	char	*c2;
	size_t	i;

	i = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
    while ((c1[i] != '\0' || c2[i] != '\0') && i < n)
    {
        if (c1[i] != c2[i])
            return (c1[i] - c2[i]);
    }
    return (0);
}