#include "ft_libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	d;
	size_t	s;
	size_t	i;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (d >= size)
		return (size + s);
	while ((src[i] != '\0') && ((i + d + 1) < size))
	{
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (s + d);
}