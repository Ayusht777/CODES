// USING SWITCH CASES
include<stdio.h>
int main()
{
    float a,b,c;
    int ca;
    printf("THE CALCULATION MODE");
    printf("\n1.ADD\n2.SUB\n3.MULTI\n4.DIV\n5.remainder");
    scanf("&d",&ca);
    switch(ca)
    {
    case 1:
        c = a + b ;
        printf("%f + %f = %.2f",a,b,c);
        break;
    case 2:
        c = a - b ;
        printf("%f - %f = %.2f",a,b,c);
        break;
    case 3:
        c = a * b ;
        printf("%f + %f = %.2f",a,b,c);
        break;
    case 4:
        c = a / b ;
        printf("%f / %f = %.2f",a,b,c);
        break;
    case 5:
        c = a % b ;
        printf("%f %% %f = %.2f",a,b,c);
        break;
    default:
        printf("try agian");
    }
    return 0;

}
