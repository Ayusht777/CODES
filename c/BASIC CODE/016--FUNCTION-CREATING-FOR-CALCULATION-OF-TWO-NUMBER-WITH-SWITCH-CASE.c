#include<stdio.h>
//TWO NUMBER CALCULATOR WITH HELP OF function
int add()
{   int a,b;
    printf("\nENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("\nENTER SECOND NUMBER:");
    scanf("%d",&b);
    return(a+b);

}
int sub()
{   int a,b;
    printf("\nENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("\nENTER SECOND NUMBER:");
    scanf("%d",&b);
    return(a-b);
}

int multi()
{
    int a,b;
    printf("\nENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("\nENTER SECOND NUMBER:");
    scanf("%d",&b);
    return(a*b);
}

int div()
{
    float a,b;
    printf("\nENTER FIRST NUMBER:");
    scanf("%f",&a);
    printf("\nENTER SECOND NUMBER:");
    scanf("%f",&b);
    return(a/b);
}
int main()
{
    char x;
    printf("SELECT FROM THE LIST");
    printf("\nA addition\nB subtraction\nC multiplication \nD DIVISION\n:");
    scanf("%c",&x);

    float a,b,c,d;

    switch(x)
    {

// you can also use {}in case   also you can use nested case label
    case 'A':
        {
            case 'a':
                {
                 a =add();
                 printf("\nTHE SUM IS :%.0f",a);
                 break;
                }

        }



    case 'B':
    {
        case 'b':
        {
            b =sub();
            printf("\nTHE DIFF IS :%.0f",b);
            break;
        }

    }
    case 'C':
    {
        case 'c':
        {
            c=multi();
            printf("\nTHE MULTI IS :%.0f",c);
            break;
        }


    }
    case 'D':
    {
        case 'd':
        {
            d = div();
            printf("\nTHE DIV IS :%.2f",d);
            break;
        }


    }
      default:
        printf("\ntry agian");
    }
}
