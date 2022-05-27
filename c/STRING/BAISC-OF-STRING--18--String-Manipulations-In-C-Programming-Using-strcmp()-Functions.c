//String Manipulations In C Programming Using strcmp() Functions
//syntax :strcmp(str1,str2/any"word")
//strcmp( ) function in C compares two given strings and returns zero if they are same.
#include<stdio.h>
#include<string.h>
void main()
{
         char s[50];
         char t[50];
         printf("ENTER FIRTS STRING:");
         fgets(s,sizeof(s),stdin);
         printf("\nENTER SECOND STRING:");
         fgets(s,sizeof(s),stdin);
         int i= strcmp(s,t);
         if(i==0)
         {
                  printf("\nboth string are equal");

         }
         else
                  printf("\nSTRING ARE NOT EQUAL");
         // the draw back is that it is case sensitive comparison





}




