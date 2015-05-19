#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("The number you entered was: %s\n", argv[1] );

	/*atof() converts ascii char to float */
	printf("Your number in Euro: %.2f \n", atof(argv[1]) );

	/*atof() converts ascii char to float */
	printf("Your number in Pounds: %.2f \n", atof(argv[1])*0.7302 );

	/*atof() converts ascii char to float */
	printf("Your number in Dollars: %.2f \n", atof(argv[1])*1.0872 );


	return 0;
}