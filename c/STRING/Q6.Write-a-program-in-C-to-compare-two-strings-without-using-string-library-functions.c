//Q6.Write a program in C to compare two strings without using string library functions[hold]
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100],y[100];
         printf("program to compare two strings without using string library functions");
         printf("\nENTER THE FIRTS STRING:");
         fgets(x,sizeof x,stdin);
         printf("\nENTER THE SECOND STRING:");
         fgets(y,sizeof y,stdin);
         int i=0,j=0,k=0;
         while(x[i]!='\0')
         {
                  j++;
                  i++;
         }
         i=0;
         while(y[i]!='\0')
         {
                  k++;
                  i++;
         }
         int z=0,a=0,s=0;
         if (k!=j)
         {
                  printf("\nTHE TWO STRING'S ARE NOT EQUAL");
         }

         else
         {
              while(x[i]!='\0'&&y[i]!='\0')
              {
                  if(x[i]-y[i]==0)
                  {
                           s++;
                  }
                  else if(x[i]-y[i]!=0)
                  {
                           a++;
                  }
                  else if(x[i]+32==y[i]||x[i]-32==y[i])
                  {
                           z++;
                  }
                  i++;
              }
              if ((j==s&&k==s)||(z==j||z==k))
         {
                  printf("\nBOTH STRING ARE EQUAL");
         }
         else
                  printf("\nstring are not equal");








         }

}
