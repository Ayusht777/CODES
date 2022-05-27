#include<stdio.h>
int main()
{
    float m,h,b,c,p,x=0;
    printf("THE MARKS CALACULATOR");
    printf("\nOBTAIN MARKS IN B.E.E:");
    scanf("%f",&b);
    if(b<=50&&b>=0)
        x=1;
    else
    {
        printf("\nRENETER THE MARK'S");
        printf("\nOBTAIN MARKS IN B.E.E:");
        scanf("%f",&b);
    }
    if(0<=b<=50&&x==1)
    {
        printf("\nOBTAIN MARKS IN HUMAN VALUES:");
        scanf("%f",&h);
        if (0<=h<=50)
        x=0;
        else
        {
            printf("\nRENETER THE MARK'S");
            printf("\nOBTAIN MARKS IN HUMAN VALUES:");
            scanf("%f",&h);

        }

    }
     printf("\nOBTAIN MARKS IN PHYSICS:");
     scanf("%f",&p);
      if(p<=50&&p>=0)
        x=1;
    else
    {
        printf("\nRENETER THE MARK'S");
        printf("\nOBTAIN MARKS IN PHYSICS:");
        scanf("%f",&p);
    }

      printf("\nOBTAIN MARKS IN MATHS:");
     scanf("%f",&m);
      if(m<=50&&m>=0)
        x=1;
      else{
        printf("\nRENETER THE MARK'S");
        printf("\nOBTAIN MARKS IN MATHS:");
        scanf("%f",&m);
      }

      printf("\nOBTAIN MARKS IN C.S.E:");
     scanf("%f",&c);
      if(c<=50&&c>=0)
        x=0;
      else
      {
          printf("\nRENETER THE MARK'S");
        printf("\nOBTAIN MARKS IN C.S.E:");
        scanf("%f",&c);

      }
      float t;
      t = p+c+m+h+b;
      t =t/250*100;
      printf("\nYOUR TOTAL PERCENTAGE:%.2f",t);
      if(t>=33)
        printf("\nPASS");
      else
        printf("\nFAIL");








}
