#include<stdio.h>

int main(){
	char var;
	
	printf("Enter a character: ");
	scanf("%c",&var);
	
	printf("Character: %c\n", var);
	printf("ASCII : %d\n", var);
	printf("Previous character: %c\n", var-1);
	printf("Next character: %c\n", var+1);
	
	return 0;
}