#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[6];
    int sum;
    int average;
    int number = 6;

    system("clear");
    printf("\nPlease enter each grade one by one!\n");
    printf("Grade 1\n");
    scanf ("%d", &grades[0]);

    system("clear");
    printf("\nGrade 2\n");
    scanf ("%d", &grades[1]);

    system("clear");
    printf("\nGrade 3\n");
    scanf ("%d", &grades[2]);

    system("clear");
    printf("\nGrade 4\n");
    scanf ("%d", &grades[3]);

    system("clear");
    printf("\nGrade 5\n");
    scanf ("%d", &grades[4]);

    system("clear");
    printf("\nGrade 6\n");
    scanf ("%d", &grades[5]);

    sum = grades[0] + grades[1] + grades[2] + grades[3] + grades[4] + grades[5];
    average = sum / number;

    system("clear");

    printf("\nThe average of\n%d\n%d\n%d\n%d\n%d\n%d\n----\n Is %d%%", grades[0], grades[1], grades[2], grades[3], grades[4], grades[5], average);


    return 0;
}
