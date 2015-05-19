#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char pass[20]="Password123"; //Password
    char input[20]; //Imput
    int counter = 0; //Counter

    while(counter <= 3)
    {
        printf("Please enter your password: \n");
        scanf("%c", &input); //Accepting Input

        if(pass== input){ //Checking if correct
            printf("Correct!");
            break;
        }else if(pass != input){ //If not correct
            counter ++;
            printf("Please try agian!");
        }else if (counter == 3){ //If third try fail
            printf("You have failed!");
            break;
        }else{
            printf("You broke it!!!"); //Other
        }
    }

    return 0;
}
