#include "ft_libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return (&big[i]);	
		i++;
	}
	if (little[0] == '\0')
		return (big);
	return (0);
}