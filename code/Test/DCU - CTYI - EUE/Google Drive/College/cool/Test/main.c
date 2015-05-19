#include <stdio.h>
#include <stdlib.h>
#include "cars.h"



int cid;

int main(int argc, char *argv[])
{
    FILE*cFile;
    cFile = fopen("cars.txt", "r");

    fprintf(cFile, "%s");

 	printf("Please enter a car from the list below;\t(Type only ID)\n");
	printf("\n");
	scanf("%d", &cid);

    system("cls");

	if(cid == 1){
	    printf("\n");
        getTopSpeed(bv);
	}else if(cid == 2){
	    printf("\n");
        getTopSpeed(vg);
	}else{
        printf("That was not listed");
	}

    fclose(cFile);

	return 0;
}
