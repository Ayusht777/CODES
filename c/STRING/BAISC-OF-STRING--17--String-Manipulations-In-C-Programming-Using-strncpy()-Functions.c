//String Manipulations In C Programming Using strncpy() Functions
//syntax :strncpy(target,source,size in num)
//copying one string to another string
#include<stdio.h>
#include<string.h>
void main()
{
         char s[50];
         char t[50];
         printf("ENTER FIRTS STRING:");
         fgets(s,sizeof(s),stdin);
         int n, z = strlen(s)-1;
         printf("\nTHE SIZE OF STRING ONE:%d",z);
         printf("\nENTER NUMBER OF LETTER YOU WANT TO COPY IN STRING 2:");
         scanf("%d",&n);
         strncpy(t,s,n);
         printf("\nTHE COPIED STRING STRING:%s",t);




}




