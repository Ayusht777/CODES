// BASIC-OF-PREPROCESSOR-AND-MACROS-02
/*
Function like Macros

You can also define macros that work in a similar way as a function call.
This is known as function-like macros. For example,

#define circleArea(r) (3.1415*(r)*(r))

Every time the program encounters circleArea(argument), i
t is replaced by (3.1415*(argument)*(argument)).
*/
#define PI 3.14
#define areacricle(r) (PI * r * r)
#include <stdio.h>
int main()
{
    float x;
    printf("\nENTER THE RADIUS OF CIRCLE:");
    scanf("%f", &x);
    printf("\nTHE AREA %.2f", areacricle(x));
}