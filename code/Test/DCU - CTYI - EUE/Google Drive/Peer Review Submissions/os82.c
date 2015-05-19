#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str1[20] = "domhnallisawizard";
    char str2[20];
    int attempts;
    int i;

    attempts = 3;
    printf("What is the password? (20 characters max)\n %d attempts remaining\n\n", attempts);
        scanf("%s", &str2);
        i = strcmp(str1, str2);

            if (strlen(str2) < 21){
            do{
       if (i == 1 || i == -1 ){
        do {
                if (strlen(str2) < 21){

                if (i == 0){
                    break;
                }

            attempts --;
            printf("\n\nINCORRECT!!!\n What is the password? (20 characters max)\n %d attempts remaining\n\n", attempts);
            scanf("%s", &str2);

            i = strcmp(str1, str2);
            }
            else if (strlen(str2) > 20){
                break;
            }
    }while(attempts > 1);
       }

        if (i == 0){
            printf("\n\nPassword correct\n\n");
            break;
        }
        else if (attempts == 1){
                    printf("\nSorry you're locked out");
                }
        else {
            break;
        }

        }while (attempts > 1);
            }
            else printf("\nToo long, restart!!!\n\n");
    return 0;
}
