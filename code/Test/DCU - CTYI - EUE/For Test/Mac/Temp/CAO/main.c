#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Level;
    int Grade;

    system("clear");
    printf("\n\nWhat level did you take? [1 for Higher/2 for Ordinary]\n");
    scanf("%d", &Level);

    if(Level == 1){
        system("clear");
        printf("\nWhat was your Percentage?\n");
        scanf("%d", &Grade);

        if(Grade >=90){
            system("clear");
            printf("\n\nWell done you got an A1\n");
        } else if(Grade >=85 && <=89){
        printf("\n\nWell done you got an A2\n");
        }
    } else if(Grade >= 85 && Grade >= 100){
        printf("\n\nWell done you got an A\n");
    }


    return 0;
}
