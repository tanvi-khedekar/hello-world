//-------------------------------------------------------
//Title:            5_format_specifiers.c
//Author:           Tanvi Jagdish Khedekar
//Date Created:     19th March 2024
//Date Modified:    
//Change Log:       1. Initial Version
//-------------------------------------------------------


#include <stdio.h>

int main(void)
{
    int iInteger = 10;
    float fFloating = 3.14;
    double dPi = 3.14;

	// Integer Specifiers
    printf("Integer: %d\n", iInteger);								//10
    printf("Unsigned Integer: %u\n", (unsigned int)iInteger);		//10
    printf("Octal: %o\n", iInteger);								//12
    printf("Character: %c\n", iInteger);							// 
    printf("Short Decimal: %hd\n", iInteger);						//10
    printf("Long Decimal: %ld\n", iInteger);						//10
    printf("Unsigned Decimal: %u\n", iInteger);						//10
    printf("Unsigned Short Decimal: %hu\n", iInteger);				//10
    printf("Unsigned Long Decimal: %lu\n", iInteger);				//10
    printf("Decimal (for %i specifier): %i\n", iInteger);			//-32476960
    printf("Hexadecimal (lowercase): %x\n", iInteger);				//a
    printf("Hexadecimal (uppercase): %X\n\n", iInteger);			//A
    
    // Floating Point Specifiers
    printf("Float: %f\n", fFloating);								//3.140000
    printf("Exponential Notation: %e\n", fFloating);				//3.140000e+00
    printf("Exponential Notation (uppercase): %E\n", fFloating);	//3.140000E+00
    printf("Compact form: %g\n", fFloating); 						//3.14 Chooses between %f and %e based on the value.
    printf("Compact form (uppercase): %G\n\n", fFloating); 			//3.14 Chooses between %f and %E based on the value.
    
    // Double Specifiers
    printf("Value of pi: %lf\n\n", dPi);							//3.14000
    
    // Character Specifiers
    printf("String: %s\n", "Hello, World!");						//Hello, World!
     
    return 0;
}