#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     int input;
     int attempt = 0;
     int password = "12345";
     int type;

     printf("Please enter that password\n");
     scanf("%d", &input);

     if(input == password){
        type = 0;
     }else if((input != password) && (attempt == 1)){
        type = 1;
        attempt ++;
     }else if((input != password) && (attempt == 2)){
        type = 2;
        attempt ++;
     }else if((input != password) && (attempt == 3)){
        type = 3;
        attempt ++;
     }

     switch(type){
        case(0):
            printf("Correct you got it!!!\n");
            break;
        case(1):
            printf("Sorry that is wrong - you have 2 Attempts left\n");
            break;
        case(2):
            printf("Sorry that is wrong - you have 1 Attempts left\n");
            break;
        case(3):
            printf("Sorry that is wrong - you have 0 Attempts left\n");
            break;
        default:
            printf("Sorry, unknown type of number! \n");
            break;
        }
return 0;
}
