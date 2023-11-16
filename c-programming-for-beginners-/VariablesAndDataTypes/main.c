#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	//COMMAND LINE ARGUMENTS
	int numberOfArguments = argc;
	char *argument1 = argv[0];
	char *argument2 = argv[1];
	
	printf("\nNumber of Argunments: %d\n", numberOfArguments);
	printf("argument 1 is the program name: %s\n", argument1);
	printf("argument 2 is the command line argument: %s\n", argument2);
	
	
	// CHALLENGE: RECTANGLE
	double width = 32.3;
	double height = 15.3;
	double perimeter = 0.0;
	double area = 0.0;
	
	perimeter = 2.0 * (height + width);
	area = width * height;
	
	printf("\nPerimeter is \t: %f\n", perimeter);
	printf("Area is \t: %f\n", area);
	
	// DATA TYPES
    int integerVar = 100;
    float floatingVar = 331.7993232323;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = -5;


    printf("\nintegerVar = %i\n", integerVar);
	printf("floatingVar = %f\n", floatingVar);
	printf("floatingVar = %.3f\n", floatingVar);
	printf("doubleVar = %e\n", doubleVar);
	printf("doubleVar = %g\n", doubleVar);
	printf("charVar = %c\n", charVar);
	printf("boolVar = %i\n", boolVar);


	// ENUM
    enum Company {
		GOOGLE,
		FACEBOOK,
		XEROX,
		YAHOO = 10,
		EBAY,
		MICROSOFT
	};
	
	enum Company xerox = XEROX;
	enum Company google = GOOGLE;
	enum Company ebay = EBAY;
	
	printf("\nThe value of xerox is: %d\n", xerox);
	printf("The value of google is: %d\n", google);
	printf("The value of ebay is: %d\n", ebay);
	
	return 0;
}