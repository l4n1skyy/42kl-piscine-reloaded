int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
	int total;
	total = 1;
	if (nb < 0)
		return 0;
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return total;
}
