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
