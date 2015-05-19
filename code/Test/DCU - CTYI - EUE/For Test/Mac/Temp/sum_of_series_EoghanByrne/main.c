#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int even = 1;
    int num = 1;
    int sum;

    system("clear");
    printf("\nEnter the number of even numbers you want displayed!\n");
        scanf("%d", &n);

    while (num <= n)
    {
        if (even % 2 == 0)
        {
            printf("%d. %d \n", num, even);
            num++;

            sum = sum + even;
        }
        even++;
    }

    printf("\nThe sum of the even numbers is: %d \n", sum);

    return 0;
}
