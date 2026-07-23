#include <unistd.h>

void	ft_print_alnum(void);
void	ft_putchar(char c);

int	main(void)
{
	ft_print_alnum();
}

void	ft_print_alnum(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}

	char n = '0';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
