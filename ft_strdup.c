#include "libft.h"
int ft_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);

}
char *ft_strdup(char *str)
{
	int i;
	int lenght;
	char *dup;

	i = 0;

	lenght = ft_strlen(str);
	dup = malloc (lenght + 1* sizeof(char));
	while (str[i] != '\0')
	{
		dup [i] = str [i];
		i++;
	}
	dup [i] = '\0';
	return dup;
}
