#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char password[30] = "42";//first accepted password
char password2[30] = "AfricanOrEuropean?"; //second accepted password
char guess[30]; //stores user's input
int numberGuesses; //record no. of guesses
int i; //used in the for loop

int passwordCheck () //defined function to check the inputted password
{

    for (numberGuesses = 1; numberGuesses <= 3; numberGuesses++)
    {
        printf("\nAttempt %d out of 3\n\n", numberGuesses);
        if (numberGuesses == 3)
        {
            printf("\nHint: don't panic, you have to know\n these things when you're a king, you know.\n\n");
        }
        scanf("%s", guess);
        if (strcmp(password, guess) != 0 && strcmp(password2, guess) != 0)
        {
            if (numberGuesses ==  3)
            {
                printf("\nThat was your last guess! You have failed to log in.\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            }
            else
            {
                printf("\nNope, try again\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            }
        }
        else if (strcmp(password, guess) == 0 && strcmp(password2, guess) != 0)
        {
            printf("\nI'll accept that answer.\nYou are now logged in\n\n");
            break; //if the attempt is correct, the loop stops
        }
        else if (strcmp(password2, guess) == 0 && strcmp(password, guess) != 0)
        {
            printf("\nHuh? I... I don't know that.\n*falls off bridge*\nWell done, you're logged in.\n\n");
            break; //if the attempt is correct, the loop stops
        }
    }
}

int main()
{
    printf("What is the air-speed velocity of an unladen swallow?\n");
    passwordCheck();
    return 0;
}
