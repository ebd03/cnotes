#include <stdio.h>
#include <stdlib.h>

struct car{
	char* make;
	char* model;
	int bhp, topSpeed;
}; /* don't forget the semicolon */

int main(int argc, char* argv[])
{

	/* Add a new car by using our struct */
	struct car bv = {"Bugatti", "Veyron", 1000, 407};
	struct car test = {"Mini", "Golf", 500, 80};

	/* using the dot operator to access data from a struct */

    system("cls");
	printf("Make: \t %s\n", bv.make);
	printf("Model: \t %s\n", bv.model);
	printf("Horse Power: %d\n", bv.bhp);
	printf("Top Speed \t %d \n\n\n", bv.topSpeed);

	printf("Make: \t %s\n", test.make);
	printf("Model: \t %s\n", test.model);
	printf("Horse Power: %d\n", test.bhp);
	printf("Top Speed \t %d \n", test.topSpeed);


	return 0;
}
