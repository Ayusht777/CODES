//Q18 Write a program in C to Find the Frequency of Characters
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50],y;
         int i,c=0;
         printf("program to Find the Frequency of Characters");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         printf("\nTHE GIVEN STRING:%s",x);
         printf("\nENTER THE SINGLE CHARACTER :");
         scanf("%c",&y);
         while(x[i]!='\0')
         {
                  if(x[i]==y)
                  {
                           c++;
                  }
                  i++;
         }
         printf("\nTHE ENTERED CHARACTER %c IS APPEARED %d TIMES",y,c);


}
