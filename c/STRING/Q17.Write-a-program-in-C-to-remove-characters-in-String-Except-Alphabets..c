//17 Write a program in C to remove characters in String Except Alphabets.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100],y[100];
         printf("program to remove characters( 1,2,3,.,@,# etc) in String Except Alphabets.");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i=0,j=0;
         while(x[i]!='\0')
         {
                  if(x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z')
                  {
                           y[j]=x[i];
                           j++;
                  }
                  i++;
         }

         printf("\nTHE FINAL STRING :%s",y);
}
