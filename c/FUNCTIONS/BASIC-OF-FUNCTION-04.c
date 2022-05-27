// BASIC-OF-FUNCTION-04
// Argument Passed and Returns a Value
#include <stdio.h>
int sum();
int main()
{
    int a, b, c;
    c = sum(a, b); // with arg
    if (c %= 2)
    {
        printf("\nTHE SUM IS EVEN");
    }
    else
        printf("\nTHE SUM IS ODD");
}
int sum(int x, int y)
{

    printf("\nENTER 1ST NO:");
    scanf("%d", &x);
    printf("\nENTER 2ST NO:");
    scanf("%d", &y);
    printf("\n THE SUM = %d", x + y);
    return (x + y);
    // with return value
}