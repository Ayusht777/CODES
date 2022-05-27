//Q8.Write a program in C to copy one string to another string .
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50],y[50];
         int i;
         printf("program to copy one string to another string");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof(x),stdin);
         while(x[i]!='\0')
         {
                  y[i]=x[i];
                  i++;
         }
         printf("\nTHE COPIED STRING %s",y);

}


