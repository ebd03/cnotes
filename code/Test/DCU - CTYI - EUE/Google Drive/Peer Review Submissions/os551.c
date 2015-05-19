#include<stdio.h>

#include<string.h>

int main()

{
//the 2 strings
char pass[20] = "Domhnall'sAWizard";

char word[20];

int i;
 int b=1;
printf("You have 3 attempts to guess the passowrd \n\n");
    do{
printf("Enter the password:\n" );

scanf("%s", word);
//compare the 2 strings
i = strcmp(pass, word);
//if both strings have the same ASCII number then:
if (i == 0)

{

printf("Open Sesame, you've guessed it!!!/n");
//once guessed, then terminate programme
break;}
//if ASCII numbers are different then:
else if (i!=0)

{

printf("Incorrect\n\n");
//increment value
b++;}
//stop programme after 3 attempts
} while (b < 4);

/*not sure how to get it to say 'you have 2 attempts remaining',
 'you have 1 attempt remaining' etc. */
    return 0;
}
