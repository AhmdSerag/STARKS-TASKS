#include <stdio.h>

int main() {
    int x;
    char y;
    float z;

    printf("Enter an integer: ");
    scanf(" %d",&x);
    printf("Enter a character: ");
    scanf(" %c",&y);
    printf("Enter a float: ");
    scanf(" %f",&z);

    printf("Integer: %d\n", x);
    printf("Character: %c\n", y);
    printf("Float: %f\n", z);

    return 0;
}
