// area calculator
#include <stdio.h>
#include<math.h>

int main() {
    int ar;
    int c;
    int x,y,z;
    printf("Note measurements in Meters");
    printf("\nIf not select the conversation mode");
    printf("\n1.centimeters to meters\n2.acre's to meters\n3.square feet's to meters,\n4.Any number to get out from this option:");
    scanf("%i",&c);
    switch (c)
    {
        case 1:
        printf("enter the value: ");
        scanf("%i",&x);
        y =x/100;
        printf("%d meters",y);
        break;
        case 2:
        printf("enter the value: ");
        scanf("%i",&x);
        y =x*4046.856;
        printf("%d meters",y);
        break;
        case 3:
        printf("enter the value: ");
        scanf("%i",&x);
        y =x*0.092903;
        printf("%d meters",y);
        break;
        default:
        printf("\n----Now your unit in meters-----");
    }
     printf("\nProgram To Find Area Of 2D Shapes");
     printf("\n1.Square\n2.Rectangle\n3.Triangle\n4.Circle");
     printf("\nEnter The Mode: ");
     scanf("%i",&ar);
     switch (ar)


    {
        case 1:
        printf ("\nArea Of Square");
        float A,a;
        printf("\nEnter The Size Of Side(a):");
        scanf("%f",&a);
        A = a*a;
        printf("\nThe Area Of Square is :%f",A);
        break;
        case 2:
        printf ("\nArea Of Rectangle");
        float R,l,b;
        printf("\nEnter The Size Of Length(l):");
        scanf("%f",&l);
        printf("\nEnter The Size Of Breath(b):");
        scanf("%f",&b);
        R =l*b;
        printf("\nThe Area Of Rectangle is :%f",R);
        break;
        case 3:
        printf ("\nArea Of Triangle");
        float T,B,h;
        printf("\nEnter The Size Of Base(b):");
        scanf("%f",&B);
        printf("\nEnter The Size Of Height(h):");
        scanf("%f",&h);
        T = 1/2*B*h;
        printf("\nThe Area Of Square is :%f",T);
        break;
        case 4:
        printf ("\nArea Of Circle");
        float C,r;
        printf("\nEnter The Size Of Radius (r):");
        scanf("%f",&r);
        C = M_PI*r*r;
        printf("\nThe Area Of Circle is :%f",C);
        break;

        default:
        printf("I will Add new area calcultor later");
    }




}
