#include <stdio.h>

int main(void)
{
	long long sum = 0;
	int n, i, max, min, a;

	scanf("%d %d", &n, &a);
	sum = max = min = a;

	for (i = 0; i < n-1; i++) {
		scanf("%d", &a);
		sum += a;

		if (a < min) 
			min = a;
		if (a > max)
			max = a;
	}

	printf("%d %d %lld\n", min, max, sum);

	return 0;
}	
