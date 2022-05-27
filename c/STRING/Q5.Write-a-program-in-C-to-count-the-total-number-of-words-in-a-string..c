//Q5.Write a program in C to count the total number of words in a string.
#include<string.h>
#include<stdio.h>
void main()
{
         char x[100];
         printf("program to count the total number of words in a string");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         printf("\nTHE INPUTED STRING:%s",x);
         int i=0,j=0;
         while(x[i]!='\0')
         {
                  if(x[i]==' '||x[i]=='\n'||x[i]=='\t')
                  {
                           j++;


                  }
                  i++;
         }
         printf("\nTHE TOTAL WORD ARE :%d",j);
}
