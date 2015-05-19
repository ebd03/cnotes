#include <stdio.h>
#include <stdlib.h>

int main()
{
   char buffer[256] = {0};
char password[] = "password";
char c;
int pos = 0,k=0;
do{           //start
printf("%s", "Enter password: ");
do {
    c = getch();
    if( isprint(c) )
{
    buffer[ pos++ ] = c;
    printf("%c", '*');
}
else if( c == 8 && pos )
{
    buffer[ --pos ] = '\0';
    printf("%s", "\b \b");
}
} while( c != 13 && pos < 256);
if( !strcmp(buffer, password) )
{   k=1;
    printf("\n%s\n", "Logged on succesfully!");
}
else
{   printf("\n%s\n", "Incorrect login!");
    k=0;
}
} while(k==0);





    return 0;
}
