#include <stdio.h>

int main(void)
{
	int a, b, d, r;
	double f;

	scanf("%d %d", &a, &b);
	d = a / b;
	r = a % b;
	f = (double)a / b;
	printf("%d %d %.5f\n", d, r, f);

	return 0;
}
