#include <stdio.h>

int main() {
	double a, b, result;
	char operator;

	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &operator);

	printf("Enter two numbers: ");
	scanf("%lf %lf", &a, &b);

	switch (operator) {
		case '+':
			result = a + b;
			printf("%.2lf + %.2lf = %.2lf\n", a, b, result);
			break;
		case '-':
			result = a - b;
                        printf("%.2lf - %.2lf = %.2lf\n", a, b, result);
                        break;
		case '*':
			result = a * b;
                        printf("%.2lf * %.2lf = %.2lf\n", a, b, result);
                        break;
		case '/':
			if (b == 0) {
				printf("Error: Division by zero is not allowed\n");
			} else {
				result = a / b;
				printf("%.2lf / %.2lf = %.2lf\n", a, b, result);
			}
			break;
		default:
			printf("Error: Invalid operator\n");
	}

	return 0;
}
