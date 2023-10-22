#include <string.h>
#include <stdlib.h>
void *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    
    i = 0;
    unsigned char *src = (unsigned char *) str;
    while (i < n)
    {
        src[i] = c;
        i++;
    }
    return (str);
}
