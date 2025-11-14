#include <stdio.h>

int main() {
	int l, r, i, j;

	printf("Enter L (lower bound of range): ");
	scanf("%d", &l);

	printf("Enter R (upper bound of range): ");
	scanf("%d", &r);

	for (i = l; i <= r; i++) {
		printf("Table of %d\n", i);

		for (j = 1; j <= 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

	return 0;
}
