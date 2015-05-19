#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;
    float b;
    float h;
    float area;
    float ab;
    float n1 = 2;
    float div;

    system("clear");
    printf("\n Please enter the length of the top of the trapezoid \n"); //Accepting inputs
    scanf("%f", &t);

    system("clear");
    printf("\n Please enter the length of the bottom of the trapezoid \n");
    scanf("%f", &b);

    system("clear");
    printf("\n Please enter the height of the trapezoid \n");
    scanf("%f", &h);

    ab = t + b; //Adding top and bottom
    div = ab / n1; //Dividing Top and Bottom by 2
    area = div * h; //Multiplying sum so far by height

    system("clear");
    printf("\n The area of the trapezoid in %.5f \n", area); //Giving out put

    return 0;
}
