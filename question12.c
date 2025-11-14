#include <stdio.h>

int main() {
	int a = 5, b = 3, par, arit;

	par = (a + b) << 1;
	printf("Result with parentheses: %d\n", par);

	arit = (a + b) * 2;
	printf("Result using arithmetic: %d\n", arit);

	return 0;
}
