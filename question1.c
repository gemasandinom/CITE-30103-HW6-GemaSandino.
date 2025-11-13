#include <stdio.h>

int main(void) {
	double length, width, area, perimeter;

	printf("Enter the length of the rectangle: ");
	scanf("%lf", &length);

	printf("Enter the width of the rectangle: ");
	scanf("%lf", &width);

	area = length * width;
	perimeter = 2 * (length + width);

	printf("Area: %.2lf\n", area);
	printf("Perimeter: %.2lf\n", perimeter);

	return 0;
}
