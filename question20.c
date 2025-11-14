#include <stdio.h>

int main() {
	int num, count = 0;

	do {
		printf("Enter an integer (enter 0 to stop): ");
		scanf("%d", &num);
		if (num != 0) {
			count++;
		}

	} while (num != 0);

	printf("You entered %d numbers\n", count);
	return 0;
}
