#include <stdlib.h>
#include <math.h>

int main()
{
    float billamount;
    float per = 0.20;
    float calc;
    float ans;

    system("clear");
    printf("\nHow much is the total bill?\n");
    scanf("%f", &billamount);

    system("clear");
    calc = billamount * per;
    ans = calc + billamount;
    printf("\n\tBill amount \t\xE2\x82\xAC%.2f\n", billamount);
    printf("\tPercentage\t20%%\n");
    printf("\t\t\t---------\n");
    printf("\t Total Bill\t\xE2\x82\xAC%.2f\n\n", ans);


    return 0;
}
