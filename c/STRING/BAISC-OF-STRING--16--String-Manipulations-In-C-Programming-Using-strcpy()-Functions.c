//String Manipulations In C Programming Using strcpy() Functions
//syntax :strcpy(target,source)
//copying one string to another string
#include<stdio.h>
#include<string.h>
void main()
{
         char s[50];
         char t[50];
         printf("ENTER FIRTS STRING:");
         fgets(s,sizeof(s),stdin);
         strcpy(t,s);
         printf("\nTHE COPIED STRING STRING:%s",t);



}




