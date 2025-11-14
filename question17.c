#include <stdio.h>

int main() {
	int score;

	printf("Enter score (0-100): ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("A\n");
	} else if (score >= 80 && score <= 89) {
		printf("B\n");
	} else if (score >= 70 && score <= 79) {
		printf("C\n");
	} else if (score >= 60 && score <= 69) {
		printf("D\n");
	} else {
		printf("F\n");
	}

	return 0;
}
