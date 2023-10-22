#include "libft.h"
int sepcheck2(char *str, char *charset, int i) 
{
    int j = 0;
    while (str[i] != '\0') 
    {
        j = 0;
        while (charset[j] != '\0') 
        {
            if (str[i] == charset[j]) 
            {
                return i;
            }
            j++;
        }
        i++;
    }
    return (-1);
}

int sepcheck(char *str, char *charset) 
{
    int i = 1;
    int j = 0;
    int count = 0;
    while (str[i] != '\0') 
    {
        j = 0;
        while (charset[j] != '\0') 
        {
            if (str[i] == charset[j]) 
            {
                count++;
            }
            j++;
        }
        i++;
    }
    return count;
}

char **ft_split(char *str, char *charset) 
{
    int i;
    int k;
    char **tab;
    int count;
    int current_index = 0;

    i = 0;
    count = sepcheck(str, charset);
    tab = (char **)malloc(count * sizeof(char *));
    
    while (i < count) 
    {
        k = sepcheck2(str, charset, current_index);
        tab[i] = (char *)malloc((k - current_index) + 1);
        
        int j;

        j = 0;
        while (j < k - current_index) 
        {
            tab[i][j] = str[current_index + j];
            j++;
        }
        tab[i][k - current_index] = '\0';
        current_index += k;
        current_index ++;
     
        i++;
}
}
/*int main() {
    char **result = ft_split("amine", " ,em");  
}*/
