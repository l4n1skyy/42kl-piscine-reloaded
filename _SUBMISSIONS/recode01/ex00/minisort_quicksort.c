/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort_quicksort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 16:15:30 by lanusri-          #+#    #+#             */
/*   Updated: 2026/07/24 16:15:30 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	quicksort(int *arr, int start, int end);
int		sort(int *arr, int start, int end);
void	swap(int *a, int *b);
int		minisort(int *a, int *b, int *c);
/*
int	main(void)
{
	int		a;

	a = 7, b = 2, c = 5;
	minisort(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	return (0);
}
*/
int	minisort(int *a, int *b, int *c)
{
	int arr[] = {*a, *b, *c};
	quicksort(arr, 0, 2);
	*a = arr[0];
	*b = arr[1];
	*c = arr[2];
	return (0);
}

void	quicksort(int *arr, int start, int end)
{
	if (start >= end)
		return ;
	int		pivot;
	pivot = sort(arr, start, end);
	quicksort(arr, start, pivot - 1);
	quicksort(arr, pivot + 1, end);
}

int	sort(int *arr, int start, int end)
{
	int		pivot;
	int		wall;
	int		scanner;

	pivot = end;
	wall = start - 1;
	scanner = start;
	while (scanner < pivot)
	{
		if (arr[scanner] < arr[pivot])
		{
			wall++;
			if (scanner != wall)
				swap(&arr[scanner], &arr[wall]);
			}
		scanner++;
		}
	swap(&arr[pivot], &arr[wall + 1]);
	return (wall + 1);
}

void	swap(int *a, int *b)
{
	int		buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
