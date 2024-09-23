#include "ft_libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	while (i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (len);
}