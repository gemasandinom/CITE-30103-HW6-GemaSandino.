#include <stdio.h>

int main() {
	int mark1, mark2, mark3, mark4, mark5;

	printf("Enter marks for subject 1: ");
	scanf("%d", &mark1);
	
	printf("Enter marks for subject 2: ");
        scanf("%d", &mark2);

	printf("Enter marks for subject 3: ");
        scanf("%d", &mark3);

	printf("Enter marks for subject 4: ");
        scanf("%d", &mark4);

	printf("Enter marks for subject 5: ");
        scanf("%d", &mark5);

	if (mark1 >= 40 && mark2 >= 40 && mark3 >= 40 && mark4 >= 40 && mark5 >= 40) {
		printf("PASS\n");
	} else {
		printf("FAIL\n");
	}

	return 0;
}
