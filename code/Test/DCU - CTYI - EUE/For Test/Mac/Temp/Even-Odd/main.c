#include <stdio.h>
#include <stdlib.h>

int main(){
     int input;
     int type;

    system("clear");
     printf("Enter a number \n");
     scanf("%d", &input);

     if(input % 2 == 0){
        type = 0;
     }else{
        type = 1;
     }

     switch(type){
        case(0):
            system("clear");
            printf("The number is even\n");
            break;
        case(1):
            system("clear");
            printf("The number is odd\n");
            break;
        default:
            system("clear");
            printf("Sorry, unknown type of number! \n");
            break;
        }
return 0;
}
