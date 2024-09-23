#include "ft_libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	if (dest < src)
	{
		while (0 < n)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
	{
		i = 0;
		while ((s[i] != '\0' || d[i] != '\0') && i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
    return (dest);
}