//Q2.Write a program in C to find the length of a string without using library function

#include<string.h>
#include<stdio.h>
void main()
{
         char x[50];
         printf("program in C to find the length of a string without using library function");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         printf("\nTHE INPUT STRING:%s",x);
         int i,j=-1;
         for(i=0;x[i]!='\0';i++)
         {
              j++;
         }
         printf("\nTHE SIZE OF STRING IS:%d",j);
}
