#include <stdio.h>

int main() {
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	(num > 0) ? printf("Positive\n") :
	(num < 0) ? printf("Negative\n") :
		printf("Zero");
	return 0;
}
