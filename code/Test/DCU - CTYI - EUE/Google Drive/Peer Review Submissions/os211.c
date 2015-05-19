#include <stdio.h>
#include <stdlib.h>

int main()
{

    char password [20] = "iopenattheclose"; //password required, go HP
    char input [20];//user input, don't want a password of more than 20 letters
    int counter = 1; //a while loop seems usable to ensure the user gets only three attempts

    while(counter<=3){
        printf("Please enter your password to login:\n");
        scanf("%s/n", input); //scan password attempt in

        if(strcmp (password, input)== 0){ //specifying conditions of breaking the while loop by adding a for loop
                printf("You are now logged in. You go, Glen Coco.\n");//success!!
                break;//exit loop
        }
                else if(strcmp(password, input) !=0 && counter != 3){ //compare strings to make sure they are the same array of chars
                printf("Access denied, please enter the correct password.\n\n"); //if incorrect, rejected and loop is continued until the counter reaches 3
                }
                else if(counter == 3){
                        printf("You have run out of password attempts. \nThis message will self-destruct in t: 9 seconds.\n"); //didn't want the final message to be the "incorrect" alert
                break;
                }
        counter++; //implement counter
            }

    return 0;
}
/*Create an Application called "openSesame.c" that checks whether or not the users password matches your predefined password.
As a stretch goal, try to limit the user to 3 incorrect guesses before locking them out.
Once the deadline has passed you will be given another student's code to review, this will form Part 2 of this activity.*/
