/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:15:30 by lanusri-          #+#    #+#             */
/*   Updated: 2026/07/24 16:15:30 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int		total;

	total = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
