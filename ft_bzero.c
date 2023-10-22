#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    unsigned char *str = (unsigned char *) s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}