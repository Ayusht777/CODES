#include <stdio.h>
// functions recurtion
int sn(int x)
{
    if (x > 0)
        // sn() function calls itself
        return (x+ sn(x-1));

    return x;
}
// x = 3
// 3>0 T
//3 + sn(3-1)
//now sn = 3 +
// than it will run again
// x = 2
// 2 >0 T
// 2 +sn(2-1)
//now sn = 2 +
// than it will run again
// x = 1
// 1 >0 T
// 1 +sn(1-1)
//now sn = 1 +
// than it will run again
// x = 0
// 0 >0 F
// sn ( 3+2+1)
//sn = 6




int main() {
    int number,result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sn(number);

    printf("sum = %d", result);
    return 0;
}


