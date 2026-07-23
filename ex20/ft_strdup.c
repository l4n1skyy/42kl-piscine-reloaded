#include <stdlib.h>

char *ft_strdup(char *src);
int ft_strlen(char *str);

char *ft_strdup(char *src)
{
	char *read;
	char *write;
	int len;

	len = ft_strlen(src);

	if (!len)
		return NULL;
}

int ft_strlen(char *str)
{
	int len;
	len = 0;
	while (*str++)
		len++;
	return len;
}
