/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digital_root_v2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:15:30 by lanusri-          #+#    #+#             */
/*   Updated: 2026/07/24 16:15:30 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_digital_root(int nb);
/*
int	main(void)
{
	printf("%d\n", ft_digital_root(152));
}
*/
int	ft_digital_root(int nb)
{
	if (nb < 10)
		return (nb);
	return (ft_digital_root(nb / 10 + nb % 10));
}
