#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare three interger variables
    int a = 30;
    int b = 4;
    int sum;            // a + b
    int product;        // a * b
    int difference;     // a - b
    float ratio;          // a / b


    //assign values to variables
    //N.B '=' is the symbol for ASSIGNMENT, not equivalent
    sum = a + b;
    product = a * b;
    difference = a - b;
    ratio = (float)a / (float)b;

    printf("\n\n\nThe sum of %d and %d is: %d \n \n", a, b, sum );
    printf("The product of %d and %d is: %d \n \n", a, b, product );
    printf("The difference of %d and %d is: %d \n \n", a, b, difference );
    printf("The ratio of %d and %d is: %.2f \n \n \n", a, b, ratio );
    return 0;
}
