#include <unistd.h>

void ft_print_numbers(void);
void ft_putchar(char i);

void ft_putchar(char i)
{
	write(1, &i, 1);
}

void ft_print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
