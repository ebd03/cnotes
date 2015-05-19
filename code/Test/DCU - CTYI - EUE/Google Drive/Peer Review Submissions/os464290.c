#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//console crashes whenever input entered in, not sure how to fix
int main()
{
    //declares variables and any necessary values
    char pass[20] = "TotallyOriginalPassword12345";
    char input[20] = "input";
    int attempt = 1;
    int passCheck = 0;

    //starts loop
    do
    {
        //instructs user and scans password typed in by user
        printf("Attempt %d. Please enter your password:\t", attempt);
            scanf("%s", &input);

        //checks if user-entered password matches stored password
        passCheck = strcmp(pass, input);

        //if statement to differentiate between correct and incorrect password
        if(passCheck /= 0)
        {
            //informs user password entered is incorrect and increments ettempt no.
            printf("\nIncorrect password. Please try again:\t");
                attempt ++;
        }else
        {
            //exits loop if password entered correct
            break;
        }
    }
    //limits user to three attempts
    while (attempt != 3);

    //informs user password entered is correct
    printf("\nCorrect password.");

    return 0;
}
