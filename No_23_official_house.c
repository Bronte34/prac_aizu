#include <stdio.h>

int main(void)
{
	int b, f, r, v, i, j, n, k;
	int index1, index2, index3;
	int rooms[4][3][10];

	/*Initialize array with 0*/
	index1 = sizeof(rooms) / sizeof(rooms[0]);
	index2 = sizeof(rooms[0]) / sizeof(rooms[0][0]);
	index3 = sizeof(rooms[0][0]) / sizeof(rooms[0][0][0]);
	for (i = 0; i < index1; i++) {
		for (j = 0; j < index2; j++) {
			for (k = 0; k < index3; k++) {
				rooms[i][j][k] = 0;
				//printf("rooms[%d][%d][%d] = [%d]\n",i, j, k, rooms[i][j][k] );
			}
		}
	}

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d %d %d %d", &b, &f, &r, &v);
		rooms[b-1][f-1][r-1] += v;
	}

	for (i = 0; i < 7; i++) {
		if (i % 2  == 0){	
			for (j = 0; j < 3; j++) {
				for (k = 0; k < 10; k++) {
					printf(" %d", rooms[i / 2][j][k]);
				}
				printf("\n");
			}
		} else {
			printf("####################\n");

		}
	}

	return 0;
}

