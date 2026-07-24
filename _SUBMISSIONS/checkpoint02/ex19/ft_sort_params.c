#include <stdio.h>

void quicksort(char **arr, int start, int end);
int sort(char **arr, int start, int end);
void swap(char **a, char **b);
int ft_strcmp(char *s1, char *s2);

void quicksort(char **arr, int start, int end)
{
	if (start >= end)
		return;

	int pivot = sort(arr, start, end);
	quicksort(arr, start, pivot - 1);
	quicksort(arr, pivot + 1, end);
}

int sort(char **arr, int start, int end)
{
	int pivot = end;
	int wall = start - 1;
	int scanner = start;

	while (scanner < pivot)
	{
		if (ft_strcmp(arr[scanner], arr[pivot]) <= 0)
		{
			wall++;
			if (wall != scanner)
				swap(&arr[wall], &arr[scanner]);
		}
		scanner++;
	}

	swap(&arr[wall + 1], &arr[pivot]);
	return wall + 1;
}

void swap(char **a, char **b)
{
	char *buffer = *a;
	*a = *b;
	*b = buffer;
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}
