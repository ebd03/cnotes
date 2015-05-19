#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int temp; //Which option
        float ctemp; //Celcius temp
        float ftemp; //Fahrenheit temp
        float calc; //Calculation
        float n1 = 9; //Number
        float n2 = 5; //Number
        float div; //Division
        float n3 = 32; //Number
        float fcalc; //Second Caculation


        system("clear");
        printf("\nDo you want to convert;\n\t\t1. Celcius to Fahrenheit\n\t\t2. Fahrenheit to Celcius\n");
        scanf("%d", &temp); //Input

         if(temp == 1){
            system("clear");
            printf("\nPlease enter your temp in Celcius\n");
            scanf("%f", &ctemp); //Input
            div = n1 / n2; //Calculatioo for Division
            calc = ctemp * div + n3; //Calculation overall

            system("clear");
            printf("\n%.0f C is %.0f F\n", ctemp, calc); //Printing of answer


            }else if(temp == 2){
            system("clear");
            printf("\nPlease enter your temp in Fahrenheit\n"); //Same as above
            scanf("%f", &ftemp);
            div = n2 / n1;
            fcalc = ftemp - n3;
            calc = fcalc * div;

            system("clear");
            printf("\n%.0f F is %.0f C\n", ftemp, calc);

        } else{
            system("clear");
            printf("\n\nSorry but that is not an option!\n"); //Rejecting anything else
        }


        return 0;
    }
