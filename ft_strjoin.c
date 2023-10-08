#include <stdlib.h>

int ft_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int ft_lenght(char **str, char *sep, int size) {
    int index = 0;
    int length = 0;
    while (index < size) {
        length += ft_strlen(str[index]);
        if (index < size - 1) {
            length += ft_strlen(sep);
        }
        index++;
    }
    return length;
}

char *ft_strjoin(int size, char **strs, char *sep) {
    if (size == 0) {
        char *empty = malloc(sizeof(char));
        empty[0] = '\0';
        return empty;
    }

    int total_length = ft_lenght(strs, sep, size);
    
    
    char *result = (char *)malloc(total_length + 1);
    if (result == NULL) {
        
        return NULL;
    }

    
    result[0] = '\0';

    int i = 0, index = 0;
    while (i < size) {
        char *current = strs[i];
        while (*current != '\0') {
            result[index++] = *current;
            current++;
        }

        if (i < size - 1) {
            char *current_sep = sep;
            while (*current_sep != '\0') {
                result[index++] = *current_sep;
                current_sep++;
            }
        }
        i++;
    }

    result[index] = '\0'; 
    return (result);
}
