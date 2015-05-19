#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char key[20]="magic"; //this is the predefined password
    char input[20]; //what the user will input
    int counter=1; //a counter for the increment

    while(counter<=3)//so that you only have three guesses
    {
        printf("Please enter your password: \n");//gets user to input password
        scanf("%s", &input); //makes the user's input the int input.

        if(strcmp(key,input) == 0 ){ //if the two strings are identical
            printf("You are logged in. Go wild. \n"); //the user is logged in
            break; //break out of the loop
        }else if(counter<3){ //if they still have guesses remaining
            counter++; //increment the counter
            int attempts=(4-counter);
            printf("Please try again. You have %d attempt(s) left \n", attempts); //let them try again
        }else if(counter==3){ //if they've had three guesses
            printf("You have been locked out \n"); //lock them out
            break; //break out of the loop
        }
    }

    return 0;

}

