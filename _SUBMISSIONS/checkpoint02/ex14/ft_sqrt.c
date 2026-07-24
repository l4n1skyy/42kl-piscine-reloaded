/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:15:30 by lanusri-          #+#    #+#             */
/*   Updated: 2026/07/24 16:15:30 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int		ft_sqrt(int nb);*/

int	ft_sqrt(int nb)
{
	int		n;

	n = 1;
	while (n * n < nb && n <= 46340)
		n++;
	if (n * n != nb)
		return (0);
	else
		return (n);
}
/*
#include <stdio.h>

int		ft_sqrt(int nb);

int	main(void)
{
	int		n;

	n = ft_sqrt(9);
	printf("%d", n);
	return (0);
}
*/
