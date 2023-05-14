#include <stdio.h>

#define pi 3.141592653589

int main(void)
{
	double r;
	double area, circumference;

	scanf("%lf", &r);
	area = pi * r * r;
	circumference = 2 * pi * r;
	printf("%.5f %.5f", area, circumference);

	return 0;
}
