#include <stdio.h>

int main() {
    float num1, num2, temp;

    printf("Enter the first number: ");
    scanf(" %f",&num1);
    printf("Enter the second number: ");
    scanf(" %f",&num2);

    printf("First number before swapping: %f\n", num1);
    printf("Second number before swapping: %f\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("First number after swapping: %f\n", num1);
    printf("Second number after swapping: %f\n", num2);

    return 0;
}
