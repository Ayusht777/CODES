// PROJECT-03-SIMPLE-CALCULATOR.c
//  add ,sub,multi,div,moduls,factorial
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char o;
    while (o != 'E' || o != 'e')
    {
        system("cls");
        printf("\n");
        printf("\n**************************************************************************************************************************");
        printf("\n*                                     SIMPLE CALCULATOR                                                                  *");
        printf("\n**************************************************************************************************************************");
        printf("\n|                                     +.ADDITION OF NUMBER                                                               |");
        printf("\n|                                     -.SUBTRACTION OF NUMBER                                                            |");
        printf("\n|                                     *.MULTIPLICATION OF NUMBER                                                         |");
        printf("\n|                                     /.DIVISION OF NUMBER                                                               |");
        printf("\n|                                     %%.MODULS OF NUMBER                                                                 |");
        printf("\n|                                     !.FACTORIAL OF NUMBER                                                              |");
        printf("\n|                                     E.EXIT                                                                             |");
        printf("\n**************************************************************************************************************************");
        printf("\nSELECT THE OPTION BY PRESSING SYMBOLE BEFORE THE OPTION NAME:");
        scanf("%c", &o);
        switch (o)
        {
        case '+':
        {
            system("cls");
            int a, b;
            printf("\nADDITION OF NUMBER");
            printf("\nENTER FIRST NUMBER:");
            scanf("%d", &a);
            printf("\nENTER SECOND NUMBER:");
            scanf("%d", &b);
            printf("\nTHE SUM OF %d + %d = %d", a, b, a + b);
            break;
        }
        case '-':
        {
            system("cls");
            int a, b;
            printf("\nSUBTRACTION OF NUMBER");
            printf("\nENTER FIRST NUMBER:");
            scanf("%d", &a);
            printf("\nENTER SECOND NUMBER:");
            scanf("%d", &b);
            printf("\nTHE SUB OF %d - %d = %d", a, b, a - b);
            break;
        }
        case '*':
        {
            system("cls");
            float a, b;
            printf("\nMULTIPLICATION OF NUMBER");
            printf("\nENTER FIRST NUMBER:");
            scanf("%f", &a);
            printf("\nENTER SECOND NUMBER:");
            scanf("%f", &b);
            printf("\nTHE MULTI OF %f * %f = %f", a, b, a * b);
            break;
        }
        case '/':
        {
            system("cls");
            float a, b;
            printf("\nDIVISION OF NUMBER");
            printf("\nENTER FIRST NUMBER:");
            scanf("%f", &a);
            printf("\nENTER SECOND NUMBER:");
            scanf("%f", &b);
            printf("\nTHE DIV OF %f / %f = %f", a, b, a / b);
            break;
        }
        case '%':
        {
            system("cls");
            int a, b;
            printf("\nMODULS OF NUMBER");
            printf("\nENTER FIRST NUMBER:");
            scanf("%d", &a);
            printf("\nENTER SECOND NUMBER:");
            scanf("%d", &b);
            printf("\nTHE MOD OF %d %% %d = %d", a, b, (a % b));
            break;
        }
        case '!':
        {
            system("cls");
            int f = 1, n;
            printf("\nFACTORIAL OF NUMBERS");
            printf("\nENETR A NUMBER:");
            scanf("%d", &n);
            int z = n;
            while (n > 0)
            {
                f = f * n;
                n--;
            }
            printf("\nTHE FACTORIAL OF %d! = %d", z, f);
            break;
        }
        case 'E':
        {
        case 'e':
        {
            exit(1);
        }
        }

        default:
        {
            printf("\nSELECT RIGHT OPTION");
            break;
        }
        }
    }
}