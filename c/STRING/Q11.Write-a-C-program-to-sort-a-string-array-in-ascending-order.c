//Q11.Write a C program to sort a string array in ascending order
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50],tempx;
         int i,len,j;
         printf("program to sort a string array in ascending order");
         printf("\nENTER A STRING:");
         fgets(x,sizeof x,stdin);
         len =strlen(x);
         for(i=0;i<len;i++)
         {
                  for(j=0;j<len-1;j++)
                  {
                           if(x[j]>x[j+1])
                           {
                                    tempx =x[j];
                                    x[j]=x[j+1];
                                    x[j+1] =tempx;
                           }
                  }
         }
         printf("\nTHE STRING IN ASCENDING ORDER:%s",x);
}
