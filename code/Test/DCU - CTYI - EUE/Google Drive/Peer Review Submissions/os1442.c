#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char myPass[200] = "domhnall";
    char pass[200];
    int check;
    int counter = 1;
    int tries = 3;
    
    do{
        printf("\nYou have: %d tries left. \n\n\tEnter the password.\n", tries);
        scanf("%s", &pass);
        
        check = strcmp(pass, myPass);
        
        if(check != 0){
            printf("\nIncorrect. \n");
        }else{
            printf("Open sesame. \n");
            break;
        }
        counter++;
        tries--;
    }while (counter < 4);
    return 0;
}