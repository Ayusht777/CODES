// multiple pattern program

#include<stdio.h>
int main()

{
    int i,j,x,c,k;
    printf("1.Half Pyramid\n2.Inverted Half Pyramid\n3.Left Arrow Star Pattern\n4.Mirror Right Triangle star\n-->");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    printf("enter the number :");
    scanf("%d",&x);

    for(i=x;i>=1;i--)
    {
        for(j=i;j<=x;j++)
           {

            printf("*");


           }
            printf("\n");

    }
    break;
    case 2:
    printf("enter the number :");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        for(j=i;j<=x;j++)
           {

            printf("*");


           }
            printf("\n");

    }
    case 3:
        for(i=1;i<=x;i++)
    {
        for(j=i;j<=x;j++)
           {

            printf("*");


           }
            printf("\n");

    }

    for(i=x;i>=1;i--)
    {
        for(j=i;j<=x;j++)
           {

            printf("*");


           }
            printf("\n");

    }

    break;
    case 4:
        printf("enter the number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(k=1;k<=x-i;k++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    break;
    default:
        printf("try agian");
        break;
    }
}
