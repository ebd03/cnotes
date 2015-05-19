#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password[20] = {"password"};
    char user[20];

    printf("\n\n\tEnter Password.\n\n\t");
    scanf("%s", user);

    if(strcmp(password,user) == 0){
        printf("\n\n\tCorrect\n\n\n");}
    else{
        printf("\n\n\tIncorrect. You have 2 tries left.\n\n");
            scanf("%s", user);
    if(strcmp(password,user) == 0){
        printf("\n\n\tCorrect\n\n\n");}
    else{
        printf("\n\n\tIncorrect. You have 1 try left.\n\n");
            scanf("%s", user);}
    if(strcmp(password,user) == 0){
        printf("\n\n\tCorrect\n\n\n");}
    else{
        printf("\n\n\tIncorrect.\n\n");}}
    return 0;
}
