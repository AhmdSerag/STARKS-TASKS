#include <stdio.h>

int main() {
    float num1, num2, add, sub, mul, div;

    printf("Enter the first number: ");
    scanf(" %f",&num1);
    printf("Enter the second number: ");
    scanf(" %f",&num2);

    add = num1 + num2;
	printf("%0.2f + %0.2f = %.2f\n", num1, num2, add);
	
    sub = num1 - num2;
	printf("%0.2f - %0.2f = %.2f\n", num1, num2, sub);
	
    mul = num1 * num2;
	printf("%0.2f * %0.2f = %.2f\n", num1, num2, mul);
	
    if (num2 != 0) {
        div = num1 / num2;
		printf("%0.2f / %0.2f = %.2f\n", num1, num2, div);
    } else {
        printf("\nDivision by zero is not allowed.\n");
    }

    return 0;
}
