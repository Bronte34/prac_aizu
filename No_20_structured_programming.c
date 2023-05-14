#include <stdio.h>

int main(void)
{
	int i, n;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		int x = i;

		if (x % 3 == 0) {
			printf(" %d", i);
			continue;
		}

		while (x) {
			if (x % 10 == 3) {
				printf(" %d", i);
				break;
			}

			x /= 10;
		}
	}

	printf("\n");
}

