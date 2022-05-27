//PROGRAM TO SWAP 2 INTEGER
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER FIRST NUMBER:\n");
    scanf("%i",&a);
    printf("ENTER  SECOND NUMBER:\n");
    scanf("%i",&b);
    c=a;
    a=b;
    b=c;
    printf("THE VALUE OF A %i\nTHE VALUE OF B %i",a,b);
    return 0;


}
