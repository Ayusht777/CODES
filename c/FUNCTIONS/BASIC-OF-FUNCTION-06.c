//BASIC-OF-FUNCTION-06
//<ctype.h>
/*
 isalnum()
 isalpha()
 isdigit()
 isgraph()
 islower()
 isprint()
 ispunct()
 isspace()
 isupper()
 isxdigit()
 tolower()
 toupper()
*/
////////////////////////////////////////////////////////////////
//isalnum()
//The isalnum() function checks whether the argument passed is an alphanumeric character (alphabet or number) or not.
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
    if(isalnum(x1))
    printf("\nIT IS ALPHANUMERIC %c",x1);
    else
    printf("\nIT IS NOT A ALPHANUMERIC %c",x1);
    if(isalnum(x2))
    printf("\nIT IS ALPHANUMERIC %c",x2);
    else
    printf("\nIT IS NOT A ALPHANUMERIC %c",x2);\
    if(isalnum(x3))
    printf("\nIT IS ALPHANUMERIC %c",x
3);
    else
    printf("\nIT IS NOT A ALPHANUMERIC %c",x3);


    

}