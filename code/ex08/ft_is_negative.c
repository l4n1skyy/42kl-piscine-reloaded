#include <unistd.h>

void ft_is_negative(int n);
void ft_putchar(char i);

void ft_putchar(char i)
{
	write(1, &i, 1);
}

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
