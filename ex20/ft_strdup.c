#include <stdlib.h>

char *ft_strdup(char *src);
int ft_strlen(char *str);

char *ft_strdup(char *src)
{
	char *read;
	char *write;
	char *dest;
	int len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	read = src;
	write = dest;
	while (*read)
	{
		*write = *read;
		write++;
		read++;
	}
	*write = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}
