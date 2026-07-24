#include <unistd.h>
void ft_putchar(char c);
void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	int n = 0;
	while (n++ < argc - 1)
	{
		ft_putstr(argv[n]);
		if (n != argc - 1)
			write(1, "\n", 1);
	}
	return (0);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
