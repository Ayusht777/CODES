//tolower()
//The tolower() function takes an uppercase alphabet and convert it to a lowercase character.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    x ='A';
    char y = tolower(x);
    printf("\n%c",y);
    x = 'a';
    y = tolower(x);
    printf("\n%c",y);
      x = '+';
    y = tolower(x);
    printf("\n%c",y);

}