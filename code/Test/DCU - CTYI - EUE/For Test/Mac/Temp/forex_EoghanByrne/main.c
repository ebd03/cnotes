#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float euro;
    float pcalc;
    float dcalc;

    system("clear");
    printf("Please enter your amount in Euro \n"); //Taking input
    scanf("%f", &euro);

    system("clear");
    printf("\n %.2f Euro \n %.2f Pounds \n %.2f Dollars \n", euro, pcalc = euro * 0.7302, dcalc = euro * 1.0872 ); //Calculating and giving output

    return 0;
}
