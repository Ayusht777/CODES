//BASIC-OF-UNIONS-02
//Pointers to unions
#include<stdio.h>
union te
{
    int x;
    float y;
}t;
int main()
{
    union te t,*z=&t;
    printf("\nENTER THE NAME:");
    scanf(" %945[^\n]",z->x);
    printf("\n%s",z->x);
    printf("\nENTER THE INTEGER:");
    
   

}
