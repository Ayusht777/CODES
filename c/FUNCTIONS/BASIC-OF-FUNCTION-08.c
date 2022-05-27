//iscntrl()
//it check whether any syntax has controlling char 
// /n /t /a /0 

#include<stdio.h>
#include<ctype.h>
int main ()
{
    char x;
    int a;
    x = 'a';
    if(iscntrl(x))
     printf("THE CHAR IS CONTROLLING CHAR");
    else
     printf("\nTHE CHAR IS NOT CONTROLLING CHAR ");
     x ='\n';
    if(iscntrl(x))
     printf("\nTHE CHAR IS CONTROLLING CHAR");
    else
     printf("\nTHE CHAR IS NOT CONTROLLING CHAR ");

}