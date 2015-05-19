#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentYear = 2015;
    int zuckerBorn = 1984;
    int babyGates = 1955;
    int age;
    int userAge;

    //User Input
        printf("\n\n\nWhat year were you born in? (Press Enter when complete) \n \n\n");
        scanf("%d", &userAge);

    //here we reuse the age variable to compute how old Bill gates is;
    system("clear");
    age = currentYear - userAge;
        printf("\n\n\n You are %d years old \n \n\n", age);
    return 0;
}
