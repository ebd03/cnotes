#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("The number you entered was: %s\n", argv[1] );

	/*atoi() converts ascii char to int */
	printf("Your number in Celcius: %f \n", atof(argv[1])*9/5+39 );

	/*atof() converts ascii char to float */
	printf("Your number in Fahrenheit: %f \n", atof(argv[1])-32*5/9 );


	return 0;
}