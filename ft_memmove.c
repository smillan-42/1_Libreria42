#include "ft_libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	while ((s[n] != '\0' || d[n] != '\0') && 0 < n)
	{
		d[n] = s[n];
		n--;
	}
    return (dest);
}