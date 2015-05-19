#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
// Two strings are defined, One the password the user will type in (str1), and secondly the predefined password (str2)
   char str1[20] = "";

   char str2[20] = "Password123";


//The programme asks the user their password and assigns what they enter to str1
   printf("Please enter your password : ");
   scanf("%s", &str1);


//The programme compares the two strings. If they are the same you are logged in, if not it asks you to try again.
    if (strcmp(str1, str2) == 0){
        printf("\nYou are successfully logged in!");
        break;
    }else{
        printf("\nPlease try again (You have two attempts remaining)\nPlease enter your password : ");
        }

    scanf("%s", &str1);

//The programme compares the two strings. If they are the same you are logged in, if not it asks you to try again.


    if (strcmp(str1, str2) == 0){
        printf("\nYou are successfully logged in!");
        break;
    }else{
        printf("\nPlease try again (You have one attempts remaining)\nPlease enter your password : ");
        }

    scanf("%s", &str1);

//The programme compares the two strings. If they are the same you are logged in, if not it asks you to try again.

     if (strcmp(str1, str2) == 0){
        printf("\nYou are successfully logged in!");
        break;
    }else{
        printf("\nYou have failed to log in");
        break;
    }

// The programme now ends as the three trys are up


    return 0;
}
