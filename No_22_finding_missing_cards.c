#include <stdio.h>

int main(void)
{
	int n, i, j, number;
	int number_of_rows, number_of_columns;
	char unsigned suit, number_to_suit[4] = {'S', 'H', 'C', 'D'};
	int cards[4][13];
	
	/*Initialize arr with 0*/
	number_of_rows = sizeof(cards) / sizeof(cards[0]); 
	number_of_columns = sizeof(cards[0]) / sizeof(cards[0][0]);

	for (i = 0; i < number_of_rows; i++) {
		for (j = 0; j < number_of_columns; j++) {
			cards[i][j] = 0; 
		}
	}
	

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%c %d", &suit, &number);
		switch (suit) {
			case 'S':
				suit = 0;
				break;
			case 'H':
				suit = 1;
				break;
			case 'C':
				suit = 2;
				break;
			case 'D':
				suit = 3;
				break;
		}

		cards[suit][number] = 1;
	}

	for (i = 0; i < number_of_rows; i++) {
		for (j = 0; j < number_of_columns; j++) {
			if (cards[i][j] == 0) 
				printf("%c %d\n", number_to_suit[i], j + 1);
		}
	}

	return 0;

}
