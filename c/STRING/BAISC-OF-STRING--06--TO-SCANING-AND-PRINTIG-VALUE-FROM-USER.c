// BAISC OF STRING TO SCANING AND PRINTIG VALUE FROM USER 2.0
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50];
         printf("ENTER YOUR NAME:");// here i just input ayush talesara but it only print ayush so to solve it we have to create a another array
         gets(x);
          // where we can store surname in it but it is not convent so we use gets() this function is present in string.h file
         printf("\nYOUR NAME IS %s",x);


}
