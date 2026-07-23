#include <stdio.h>

void quicksort(int *arr, int start, int end);
int sort(int *arr, int start, int end);
void swap(int *a, int *b);

int main(void)
{
	int len = 6;
	int arr[] = {1, 0, 2, 3, 5, 4};
	quicksort(arr, 0, len - 1);
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	return 0;
}

void quicksort(int *arr, int start, int end)
{
	if (start >= end)
		return;

	int pivot = sort(arr, start, end);
	quicksort(arr, start, pivot - 1);
	quicksort(arr, pivot + 1, end);
}

int sort(int *arr, int start, int end)
{
	int pivot = end;
	int wall = start - 1;
	int scanner = start;

	while (scanner < pivot)
	{
		if (arr[scanner] <= arr[pivot])
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

void swap(int *a, int *b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}
