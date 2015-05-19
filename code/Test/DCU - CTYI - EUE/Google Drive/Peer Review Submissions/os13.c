#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pword[6] = {'s','t','r','e','e','t'};
    char pword2[6];
    int letter;

//Scan in what user thinks is password.
    printf("Pleae enter 6 letter password.\n");
    for(letter = 0; letter < 6; letter++){
			 	scanf("%d", &pword2[letter]);
    }

//Is password correct

    if(pword[0]==pword2[0] && pword[1]==pword2[1]&& pword[2]==pword2[2]&&pword[3]==pword2[3]&&pword[4]==pword2[4]&&pword[5]==pword2[5]){
        printf("You have thought correctly");
    }
    else{
        printf("Try again.");
    }

    return 0;
}
