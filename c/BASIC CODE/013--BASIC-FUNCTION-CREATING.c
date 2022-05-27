// function without arguments and with return value
#include<stdio.h>
int input()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    return x;
}
int main()
{
    int z;
    z = input();
    printf("the number:%d",z);


}

