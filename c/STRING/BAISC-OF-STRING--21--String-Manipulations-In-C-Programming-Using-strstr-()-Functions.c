
//BAISC-OF-STRING--21--String-Manipulations-In-C-Programming-Using-strstr-()-Functions
#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],z[100];
    printf("ENTER THE STRING:");
    gets(x);
    printf("\nENTER A WORD YOU WANT TO FIND IN STRING:");
    gets(z);
    char *y;
    y = strstr(x,z);
    if(y)//here it will check that if this base address found or not 
    {
        printf("\nSTRING IS FOUND");
    }
    else 
    {
        printf("\nNOT FOUND");
    }

}