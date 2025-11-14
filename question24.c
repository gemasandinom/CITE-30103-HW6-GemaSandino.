#include <stdio.h>

int main() {
	int count = 0, i;

	for (i = 1; i <= 50; i++) {
		if (i == 40) {
			break;
		}

		if (i % 5 == 0) {
			continue;
		}

		printf("%d ", i);
		count++;
	}

	printf("\nTotal numbers displayed: %d\n", count);

	return 0;
}
