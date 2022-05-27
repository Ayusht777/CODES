//Q28.Write a C programming to convert vowels into upper case character in a given string.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[100];
         printf("program to convert vowels into upper case character in a given string");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         printf("\nTHE ORGINAL STRING:%s",x);
         int i=0;
         while(x[i]!='\0')
         {
                  if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
                  {
                           x[i] = x[i]-32;
                  }
                  i++;
         }
           printf("\nTHE MODIFIED STRING:%s",x);


}
