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
				rooms[index1][index2][index3] = 0;
			}
		}
	}

	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d %d %d %d", &b, &f, &r, &v);
		if (v < 0) { 
			rooms[b-1][f-1][r-1] -= v;
			printf("b = %d\nf = %d\nr = %d\nv = %d\nrooms = %d\n", b, f, r, v, rooms[b-1][f-1][r-1]);

		} else {
			rooms[b-1][f-1][r-1] += v;
			printf("b = %d\nf = %d\nr = %d\nv = %d\nrooms = %d\n", b, f, r, v, rooms[b-1][f-1][r-1]);
		}
	}

	/*for (i = 0; i < 8; i++) {
		if(i % 2 == 0) { 
			for (j = 0; j < index2; j++) {
		       		for (k = 0; k < index3; k++) {
					printf(" %d", rooms[i][j][k]);
				}
				printf("\n");
			}
		} else {
			printf("####################\n");

		}
	}*/

	return 0;
}

