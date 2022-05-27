//toupper()
//The toupper() function converts a lowercase alphabet to an uppercase alphabet.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    x ='A';
    char y = toupper(x);
    printf("\n%c",y);
    x = 'a';
    y = toupper(x);
    printf("\n%c",y);
      x = '+';
    y = toupper(x);
    printf("\n%c",y);

}