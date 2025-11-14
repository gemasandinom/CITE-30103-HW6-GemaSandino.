/*
 * Documentation Section
 * Program: Area and Perimeter of a rectangle
*/

/* Link Section */
#include <stdio.h>

//Main Function Section
int main(void) {
	double length, width, area, perimeter; //Declaration part

	printf("Enter the length of the rectangle: ");
	scanf("%lf", &length);

	printf("Enter the width of the rectangle: ");
	scanf("%lf", &width);

	//Executable part
	area = length * width;
	perimeter = 2 * (length + width);

	printf("Area: %.2lf\n", area);
	printf("Perimeter: %.2lf\n", perimeter);

	return 0; //End of main
}
