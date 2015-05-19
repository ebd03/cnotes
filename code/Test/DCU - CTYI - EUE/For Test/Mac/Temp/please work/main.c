#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char key[20]="open";
    char input[20];
    int counter = 1;

    while(counter <= 3)
    {
        printf("please enter your password: \n");
        scanf("%c", &input);

        if(strcmp(key, input) == 0){
            printf("You are logged in!");
            break;
        }else if(counter <3){
            counter ++;
            int attempts=(4 - counter);
            printf("please try agian you have %d attempts left",  attempts);
        }else if (counter ==3){
            printf("you have been locked out");
            break;
        }else{
            printf("you broke it");
        }
    }

    return 0;
}
