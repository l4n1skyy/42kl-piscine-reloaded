/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:15:30 by lanusri-          #+#    #+#             */
/*   Updated: 2026/07/24 16:15:30 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
/*
int	main(void)
{
	int		n;

	n = 152;
	ft_putnbr(n);
}
*/
	// INT_MIN
	// negatives
	// base case
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
		}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char	c;
	c = nb % 10 + '0';
	write(1, &c, 1);
}
