#include "ft_libft.h"

char    *strdup(const char *s)
{
    size_t  i;
    char    *ptr;

    i = ft_strlen(s);
    ptr = (char *)malloc(i * sizeof(char));
    if (ptr == NULL)
        return (NULL);
    i = ft_strlcpy(ptr, s, i);
    return (ptr);
}