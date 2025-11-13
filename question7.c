#include <stdio.h>

#define PI 3.14159265359

int main() {
	const float PIconst = 3.14159265359;
	float radius, area_def, area_const, circumference_def, circumference_const;

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	area_def = PI * radius * radius;
	circumference_def = 2 * PI * radius;

	printf("Area using #define = %.2f\n", area_def);
	printf("Circumference using #define =  %.2f\n", circumference_def);

	area_const = PIconst * radius * radius;
        circumference_const = 2 * PIconst * radius;

        printf("Area using const = %.2f\n", area_const);
        printf("Circumference using const = %.2f\n", circumference_const);

	return 0;
}
