#include <stdio.h>

int main() 
{
	char str[100];
	int i;
	float x;
	
	printf("Enter a value :");
	
	scanf("%d %s", &i, str);
	
	printf("\nYou entered: %d %s\n", i, str);
	
	scanf("%f", &x);
	
	printf("\nYou entered: %f\n", x);
	
	return 0;
}