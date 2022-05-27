//Q15.Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50];
         printf("ENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i=0;
         while(x[i]!='\0')
         {
                  if(x[i]>=65 && x[i]<=90)
                  {
                           x[i]=x[i]+32;

                  }
                  else if(x[i]>=97&&x[i]<=122)
                  {
                           x[i]=x[i]-32;
                  }
                  i++;

         }
         printf("\n%s",x);
}
