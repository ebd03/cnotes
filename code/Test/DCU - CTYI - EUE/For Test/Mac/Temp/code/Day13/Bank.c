/*
Passing information to a function
The importance of using pointers!
TYPEDEF
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct person {
	char* name;
	int bankBalance;
} person;

void developApp();

void getBal(struct person somebody){
    printf("\n%s's Balance is: %d \n",
           somebody.name, somebody.bankBalance);
}

int main(int argc, char* argv[])
{
	/* create a few people */
	person mz = {"Mark", 500};
	person es = {"Eduardo", 10000};

	developApp(&mz, 1000);

    getBal(mz);
	/*print out mz.bankBalance here too */

	return 0;
}

void developApp(person *somebody, int sales)
{

	printf("%s just launched a new app\n", somebody->name);

	somebody->bankBalance *= sales;

	printf("Their new net worth is: %d \n", somebody->bankBalance);
}
