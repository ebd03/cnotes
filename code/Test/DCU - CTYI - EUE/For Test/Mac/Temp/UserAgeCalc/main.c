#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentYear;
    int currentMonth;
    int userYear;
    int userMonth;
    int year;
    int month;
    int age;
    int age1;
    int number = 1;

    //User Input Year
        system("clear");
        printf("\n\n\nWhat is the current year? (Press Enter when complete) \n\n\n");
        scanf("%d", &currentYear);

    //User Input Month
        system("clear");
        printf("\n\n\nWhat is the current month? [In numbers!!!] (Press Enter when complete) \n\n\n");
        scanf("%d", &currentMonth);

     //User Input DOB
        system("clear");
        printf("\n\n\nWhat year were you born in? (Press Enter when complete) \n \n\n");
        scanf("%d", &userYear);

    //User Input DOB Month
        system("clear");
        printf("\n\n\nWhat month were you born in? [In numbers!!!] (Press Enter when complete) \n\n\n");
        scanf("%d", &currentYear);

    //Here we reuse the age variable to compute how old the user is;
        system("clear");
        month = currentMonth - userMonth;
        age = currentYear - userYear;
        age1 = age - number;
        if ( month < 0 ) {
            printf("\n\n\n You are %d years old \n \n\n", age1);
            }
        else {
            printf("\n\n\n You are %d years old \n \n\n", age);
            }
    return 0;
}
