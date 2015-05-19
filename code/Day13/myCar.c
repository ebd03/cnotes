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
 
	/* using the dot operator to access data from a struct */
 
	printf("Make: \t %s\n", bv.make);
	printf("Model: \t %s\n", bv.model);
	printf("Horse Power: %d\n", bv.bhp);
	printf("Top Speed \t %d \n", bv.topSpeed);
	
 
	return 0;
}