#include <stdio.h>

int main() {
	char c;
	int i;
	long int li;
	float f;
	double d;

	printf("Size of char: %lu bytes\n", sizeof(c));
	printf("Size of int: %lu bytes\n", sizeof(i));
	printf("Size of long int: %lu bytes\n", sizeof(li));
	printf("Size of float: %lu bytes\n", sizeof(f));
	printf("Size of double: %lu bytes\n", sizeof(d));

	return 0;
}
