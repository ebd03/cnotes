#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char myPW [20]; "changeME";
   char input [20];
   int counter;
   int cmpval;

   for(counter = 1; counter <= 3; counter ++){
    printf("Please enter your password:\n");

    scanf("%s", &input);

   printf("%d \n", strcmp(input, myPW));
   &cmpval, strcmp(input, myPW);

    if(cmpval < 0){
            printf("Wrong password, try again.\n");
        }

            else if(cmpval == 0){
                printf("Correct password well done!\n");
            }

                else if(cmpval > 0){
                    printf("Wrong password, try again.\n");
                }

   }  /*The programme worked mostly as planned, except for line 19, where for some reason the strcmp didnt return either -1, 0 or 1 like i was expecting.
       quite happy with the result...*/

    return 0;
}
