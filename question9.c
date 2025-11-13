#include <stdio.h>

int main() {
	int a, b, result;
	double explicit, implicit;

	a = 6;
	b = 4;

	result = a / b;
	printf("Integer division of %d and %d: %d\n",a, b, result);

	explicit = (float)a / b;
	implicit = a / b;

	printf("Explicit float result: %.2f\n", explicit);
	printf("Implicit float result: %.2f\n", implicit);

	return 0;
}
