//BASIC-OF-STRUCTURES-04
//Nested Structures
#include<stdio.h>
struct one
{ 
    int x;
    struct two
    {
        char x[100];

    }two;
    /* data */
}one;
int main()
{
    struct one o;
    printf("enter the name:");
    gets(o.two.x);// o = struct 1 and two struct 2
    printf("\nthe string :%s",o.two.x);
}
