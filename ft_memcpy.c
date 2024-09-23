#include "ft_libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while ((s[i] != '\0' || d[i] != '\0') && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}