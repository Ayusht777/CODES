// BAISC OF STRING TO SCANING AND PRINTIG VALUE FROM USER
#include<stdio.h>
void main()
{
         char x[50];
         printf("\ENTER YOUR NAME:");
         scanf("%s",x);//  you can also use scanf without  &  because it have base address of char array
         printf("\nYOUR NAME IS %s",x);


}
