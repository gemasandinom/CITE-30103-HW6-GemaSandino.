#include <stdio.h>

int main() {
	int n, i = 1, sum = 0;

	printf("Enter a positive number: ");
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}

	printf("The sum from 1 to %d is: %d\n", n, sum);
	return 0;
}
