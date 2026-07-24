/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digital_root.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:15:30 by lanusri-          #+#    #+#             */
/*   Updated: 2026/07/24 16:15:30 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_digital_root(int nb);
int		add(int nb);
/*
int	main(void)
{
	printf("%d\n", ft_digital_root(152));
}
*/
int	ft_digital_root(int nb)
{
	int		n;

	n = add(nb);
	while (n >= 10)
		n = add(n);
	return (n);
}

int	add(int nb)
{
	if (nb < 10)
		return (nb);
	return (add(nb / 10) + nb % 10);
}

/*
	152 / 10 = 15
	152 % 10 = 2
	call	f(15) return 2
	15 / 10 = 1
	15 % 10 = 5
	call	f(1) return 5
	1 / 10 = 0
	1 % 10 = 1
	call	f(0) return 1
*/
