//BASIC-OF-FUNCTION-02
//No Arguments Passed But Returns a Value
#include<stdio.h>
int sum(); //we are dealing with int value so function should be int 
int main()
{
    int z=sum();//the value of the function should be store in int main
    if(z%=2)//no arugumnet 
    {
        printf("\nTHE SUM IS EVEN");
    }
    else
    printf("\nTHE SUM IS ODD");
}
int sum()
{
    int x,y;
    printf("\nENTER 1ST NO:");
    scanf("%d",&x);
    printf("\nENTER 2ST NO:");
    scanf("%d",&y);
    printf("\n THE SUM = %d",x+y);
    return (x+y);
    // so we are giving the void main sum of number in the int main at sum(x+y)
}