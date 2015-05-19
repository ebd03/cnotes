#include <stdio.h>
#include <stdlib.h>
#include <strigs.h>
int main()
{
    int counter;
    char[20] password = "Yo Wot M8!"
    char[20] input;

    while(counter<=3){
        printf("Please input Password!\n");
        scanf(%c,&input);

        if(input = password){
            printf("Yo You know Your Stuff!");
            break}
        else if(counter<=3){
            counter++
            printf("Yo M8 %d tries left",counter);
            break}
        else if(counter>3){
            printf("NO Fun Fo Yo!");
        }
    return 0;
}
