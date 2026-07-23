#include <unistd.h>

void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

int	main(void)
{
	ft_print_reverse_alphabet();
}

void	ft_print_reverse_alphabet(void)
{
	char i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
