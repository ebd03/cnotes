#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("The number you entered was: %s\n", argv[1] );

	/*atoi() converts ascii char to int */
	printf("Treating it as an integer: %d \n", atoi(argv[1])+7 );

	/*atof() converts ascii char to float */
	printf("Treating it as a float: %f \n", atof(argv[1]) );


	return 0;
}