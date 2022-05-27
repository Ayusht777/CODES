//SUM OF 6 NUMBER USING ARRAY AND POINTER
#include<stdio.h>
int main()
{
    int x[6],sum=0;
    int *p = x;
    int i=0;
    

    for(i=0;i<6;i++)
    {
        printf("\nENTER THE %d NUMBER:",i+1);
        scanf("%d",(p+i)); // (p+i) adddres of x[i]
        sum = sum + *(p+i); // *(p+i) content  on x[i]

    }
    printf("\nTHE SUM = %d",sum);

}