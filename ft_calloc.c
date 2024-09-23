#include "ft_libft.h"

void    *calloc(size_t nelem, size_t elsize)
{
    size_t  i;
    void    *ptr;

    i = 0;
    ptr = (void *)malloc(nelem * elsize);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, nelem);
    return (ptr);
}