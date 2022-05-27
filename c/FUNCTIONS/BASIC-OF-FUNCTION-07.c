//BASIC-OF-FUNCTION-07
// isalpha()
//checks whether a character is an alphabet or not
#include<ctype.h>
#include<stdio.h>
int main()
{
    char x1;
    char x2;
    char x3;
    int z;
    x1 = 'Q';
    x2 ='1';
    x3 =':';
    if(isalpha(x1))
    printf("\nIT IS ALPHANUMERIC %c",x1);
    else
    printf("\nIT IS NOT A ALPHANUMERIC %c",x1);
    if(isalpha(x2))
    printf("\nIT IS ALPHANUMERIC %c",x2);
    else
    printf("\nIT IS NOT A ALPHANUMERIC %c",x2);\
    if(isalpha(x3))
    printf("\nIT IS ALPHANUMERIC %c",x3);
    else
    printf("\nIT IS NOT A ALPHANUMERIC %c",x3);


    

}