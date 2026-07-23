int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
	int n;
	n = 1;
	while (n * n < nb)
		n++;
	if (n * n != nb)
		return 0;
	else
		return n;
}
