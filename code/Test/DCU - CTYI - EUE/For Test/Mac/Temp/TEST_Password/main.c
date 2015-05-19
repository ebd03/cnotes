#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char pass = "123";
    char input;
    int attempt = 0;

    do
    {
        printf("Please enter your Password:");
        scanf("%s", &input);


        if(pass != input)
        {
            printf("\nIncorrect password. Please try again:\n\n");
                attempt ++;
        }else
        {
            break;
        }
    }
    while (attempt <= 2);{
            if (input == pass){
                system("clear");
                printf("\nYou got it right!\n");
            }else{
                system("clear");
                printf("You are out of tries!");
            }

    }








    return 0;
}

