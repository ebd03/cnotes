#include <stdio.h>

int main(){
    int counter = 0, sum = 0;

   do{
        if(counter != 0){//Is not necessary if you start out with counter = 2.
            printf("%d\n", counter);
            sum += counter;
        }
    } while ((counter += 2) <= 30);
    printf("sum = %d\n", sum);
    getch();
    return 0;
}
