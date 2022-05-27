// function without arguments and without  return value
#include<stdio.h>
int input()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    //return x;
}
int main()
{
    int z;
    z = input();
    printf("the number:%d",z);


}
// out   enter the number:554
//       the number:1
//it print 1 because the program of function input is wrong for compiler it understand that this program have any error so we donot use return 0 and also when comipler
// call the program does not get back in the void input () that maybe reason


