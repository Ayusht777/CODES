//Q16 Write a program in C to find the number of times a given word 'the' appears in the given string.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100];
         printf("program to find the number of times a given word 'the' appears in the given string");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i=0,c=0;
         while(x[i]!='\0')
         {
                 if (x[i]=='t'||x[i]=='T')
                 {
                          if(x[i+1]=='h'||x[i]=='H')
                          {
                                   if(x[i+2]=='e'||x[i+2]=='E')
                                   {
                                     c++;
                                   }
                          }
                 }
                 i++;
         }
         printf("\nTHE TOTAL NUMBER OF (THE) APPEARED IS :%d",c);
}
