#include <stdio.h>

int main(void)
{
	int a, b, ans;
	char op;

	while (1) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == '?')
			break;

		switch (op) {
			case '+':
				ans = a + b;
				break;
			case '-':
				ans = a - b;
				break;
			case '/':
				ans = a / b;
				break;
			case '*':
				ans = a * b;
				break;
		}
		printf("%d\n", ans);
	}

	return 0;
}
