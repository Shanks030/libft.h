#include <stdio.h>
#include <stdlib.h>
int ft_lenght(int nb)
{
    int count = 0;
    while (nb != 0)
    {
        nb /= 10;
        count ++;
    }
    return count;
}
char *strrev (char *str, int lenght)
{
    int i = 0;
    char *strrev = malloc (lenght + 1 * sizeof(char));
    while (lenght - 1 >= 0)
    {
        strrev[i] = str[lenght-1];
        i++;
        lenght--;
    }
    strrev[i] = '\0';
    return strrev;

}
char *ft_itoi (int nb)
{
    int i = 0;
    char *res;
    int lenght = ft_lenght (nb);

    res = malloc (lenght + 1 * sizeof(char));
    while (i < lenght)
    {
        res[i] = (nb % 10) + '0';
        nb /= 10;
        i++;
    }
    res[i] = '\0';
    return (strrev(res,lenght));
}
