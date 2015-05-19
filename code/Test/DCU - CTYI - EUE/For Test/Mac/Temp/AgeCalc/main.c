#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentYear = 2015;
    int zuckerBorn = 1984;
    int babyGates = 1955;
    int age;

    //calculates how old Mark Zuckerburg is;
    age = currentYear - zuckerBorn;
        printf("\n\n\nMark Zuckerburg is %d years old \n \n", age);

    //here we reuse the age variable to compute how old Bill gates is;
    age = currentYear - babyGates;
        printf("Bill Gates is %d years old \n \n\n", age);
    return 0;
}
