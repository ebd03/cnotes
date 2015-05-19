#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myPassword[20] = "acrazypassword1"; //predefined password
    char inputPassword[20]; //declare input string
    int counter; //for the for loop, to allow repeats after incorrect guesses
    int attempts = 2; //to limit incorrect guesses to 3
    
    printf("Please enter your password:\n"); //instructions for user
    
    for(counter = 0; counter < 3; counter++) //loop to allow for max 3 attempts
    {
        scanf("%s", &inputPassword); //assign input from user to input string above
        
        if(strcmp(inputPassword, myPassword) == 0) //checks for any difference between input password and predefined password
        {
            break; //exit loop if password is correct i.e. no difference between input and predefined string
        }
        else
        {
            if(attempts != 0) //when there are some attempts remaining
            {
                printf("Incorrect, please try again. You have %d attempt(s) remaining.\n", attempts);
                attempts--; //warning for non-matching input, reduce attempt counter by 1
            }
            else
            {
                printf("No tries remaining. You have been locked out!\n"); //wrong three times => end code
            }
            
        }

    }
    
    if(strcmp(inputPassword, myPassword) == 0)
    {
        printf("Correct! Welcome to the secret club.\n"); //after exiting loop, prints if input is correct
    }
    
    return 0;
}