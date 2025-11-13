#include <stdio.h>

int global_var = 100;

int main() {
	int local_var = 50;

	printf("Global variable = %d\n", global_var);
	printf("Local variable = %d\n", local_var);

	return 0;
}

