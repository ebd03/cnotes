#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int currentYear;
    int currentMonth;
    int userYear;
    int userMonth;
    int age;
    int age1;
    int month;
    int amount = 1;

    //User Input Year
        system("clear");
        printf("\n\n\nWhat is the current year? (Press Enter when complete) \n\n\n");
        scanf("%d", &currentYear);

    //User Input Month
        system("clear");
        printf("\n\n\nWhat is the current month? {In Numbers} (Press Enter when complete) \n\n\n");
        scanf("%d", &currentMonth);

     //User Input DOB
        system("clear");
        printf("\n\n\nWhat year were you born in? (Press Enter when complete) \n \n\n");
        scanf("%d", &userYear);

    //User Input Month
        system("clear");
        printf("\n\n\nWhat month were you born in? {In Numbers} (Press Enter when complete) \n\n\n");
        scanf("%d", &userMonth);

    //Here we reuse the age variable to compute how old the user is;
        system("clear");
        month = currentMonth - userMonth;
        age = currentYear - userYear;
        age1 = currentYear - userYear - amount;
        if (month > 0){
            printf("\n\n\n You are %d years old \n \n\n", age);
        } else
            printf("\n\n\n You are %d years old \n \n\n", age1);
    return 0;
}
