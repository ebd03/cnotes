#include <stdio.h>
#include <stdlib.h>

int main()
{
	int days = 1;
	double money = 0.01; //Create 2 variables

    system("clear");
	while(days<=30){
		printf("Day: %d, \t Money: %.2f\n", days, money );
		days++;
		money = money * 2;
	}
	if(money>30){
        printf("\n\nYou should go for 1c ent doubled every day for 30 Days\n");
	} else{
        printf("You should not");
	}

	return 0;
}
