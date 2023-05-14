#include <stdio.h>
int main(void) 
{
	int x, y, temp;
	scanf("%d %d", &x, &y);

	if (x == 0 && y == 0) {
		return 0;

	if (x > y) {
		temp = x;
		x = y;
		y = temp;
		printf("");
	}

	return 0;
}

