#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
	int min = 1;
	int max = 5;
	int *arr = ft_range(min, max);

	int i = 0;
	while (i < max - min)
		printf("%d\n", arr[i++]);
	return 0;
}

int *ft_range(int min, int max)
{
	if (min >= max)
		return NULL;

	int size = max - min;
	printf("size: %d\n", size);

	int *arr = malloc(size * sizeof(int));

	if (!arr)
		return NULL;

	int i = -1;
	while (++i < size)
		arr[i] = min + i;

	return arr;
}
