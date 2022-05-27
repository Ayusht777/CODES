//String Manipulations In C Programming Using strset() Functions
//syntax:strset(string,any symbole/word/letter);
// all the element of the string will get replaced by a certain character we want
#include<stdio.h>
#include<string.h>

void main()
{
         char x[50],y;
         printf("ENTER THE STRING:");
         fgets(x,sizeof(x),stdin);
         printf("\nENTER THE CHARCHTER YOU WANT TO REPLACE FOR STRING ELEMENTS:");
         scanf("%c",&y);
         printf("\nTHE NEW STRING %s",strset(x,y));
}
