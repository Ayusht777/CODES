//Q22 Write a program in C to replace the spaces of a string with a specific character
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100],y;
         printf("program to replace the spaces of a string with a specific character");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         printf("\nENTER A SPECIFIC CHARACTER YOU WNAT TO REPLACE FROM SPACE:");
         scanf("%c",&y);
         printf("\nTHE ORIGNAL STRING:%s",x);
         int i=0;
         while(x[i]!='\0')
         {
                  if(x[i]==' ')
                  {
                           x[i] = y;
                  }
                  i++;

         }
         printf("\nTHE CHANGED STRING:%s",x);


}
