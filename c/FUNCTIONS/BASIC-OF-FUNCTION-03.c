// BASIC-OF-FUNCTION-03
// Argument Passed But No Return Value
#include<stdio.h>
void sum();
int main()
{
    int a,b;//here we declared 2 int data tyep var 
    // and it will pass in sum as arg 
    printf("\nENTER 1ST NO:");
    scanf("%d",&a);
    printf("\nENTER 2ST NO:");
    scanf("%d",&b);
    sum(a,b);
}
void sum(int x,int y)//we are telling function that 2 integer type value 
// will come from main and so store it 
{
    
    
    printf("\n THE SUM = %d",x+y);
    //no return value 

}