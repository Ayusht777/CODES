//Q19 Write a program in C to Concatenate Two Strings Manually.

#include<stdio.h>
#include<string.h>
void main()
{
         char x[50],y[50];
         printf("program to Concatenate Two Strings Manually");
         printf("\nENTER FIRST STRING:");
         fgets(x,sizeof x,stdin);
         printf("\nENTER SECOND STRING:");
         fgets(y,sizeof y,stdin);
         int i,j=0;
         int s1 =strlen(x);
         int s2 =strlen(y);

         for(i=s1;i<=s2+s1;i++)
         {



                  x[i] =y[j];
                  j++;

         }


         printf("\nTHE TWO CONCATENATE:") ;
         printf("\n");
         puts(x);
}
