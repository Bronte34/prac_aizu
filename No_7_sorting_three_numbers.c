#include <stdio.h>

#define arr_length 3

void bubble_sort(int *arr)
{
	int i, j, temp;
	
	for (i=0; i<arr_length; i++) {
		for (j=arr_length-1; j>i; j--) {
			if(arr[j] < arr[j-1]) {
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}	
}

int main(void)
{
	int a[arr_length];

	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	bubble_sort(a);

	printf("%d %d %d\n",a[0], a[1], a[2]);

	return 0;
}
