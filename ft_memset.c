<<<<<<< HEAD
#include "libft.h"
=======
#include <string.h>
>>>>>>> 34cf6932f74ecf22f262b2cb8e3ec22f09b83d1b
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
