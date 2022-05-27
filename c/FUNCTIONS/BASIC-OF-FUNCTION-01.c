// BASIC-OF-FUNCTION-01
/*
A function is a block of code that performs a specific task.
Dividing a complex problem into smaller chunks makes our program easy to understand and reuse.
Types of function

There are two types of function in C programming:

    Standard library functions
    User-defined functions

*/
//user_define
/*
syntax-
#include <stdio.h>
void functionName()
{
    ... .. ...
    ... .. ...
}

int main()
{
    ... .. ...
    ... .. ...

    functionName();
    
    ... .. ...
    ... .. ...
}
*/

/*
The execution of a C program begins from the main() function.

When the compiler encounters functionName();, control of the program jumps to

 void functionName()

And, the compiler starts executing the codes inside functionName().

The control of the program jumps back to the main() function
 once code inside the function definition is executed.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////
//No Argument Passed and No Return Value
/////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void sum();//declaring the function name
int main()
{
    sum();//using the function 
    // without any agrugment like sum(x,y)
}
void sum()// sum() function defination 
{   
    int x,y;
    printf("\nENTER 1ST NO:");
    scanf("%d",&x);
    printf("\nENTER 2ST NO:");
    scanf("%d",&y);
    printf("\n THE SUM = %d",x+y);
    // no return value only printing it 
}
