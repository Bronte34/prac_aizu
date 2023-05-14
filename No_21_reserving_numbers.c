#include <stdio.h>

int main(void)
{
	int i, n, temp,  a[1000];

	scanf("%d",&n);
	for (i = 0; i < n; i++) 
		scanf("%d", &a[i]);
	
	for (i = i - 1; i >= 0; i--) {
		printf("%d", a[i]);

		if (i != 0)
			printf(" ");
		else
		       printf("\n");	
	}

	return 0;
}
