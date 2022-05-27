//String Manipulations In C Programming Using Library Functions
// using puts function
#include<stdio.h>
#include<string.h>
int main()
{
         char x[30];
         printf("ENTER YOUR GENDER:");
         fgets(x,sizeof(x),stdin);
         if (x=="MALE"&x=="male")
         {
             printf("\nYOUR GENDER IS ");
                    puts(x);
         }
         else if (x=="female"&&x=="FEMALE")
         {
                     printf("\nYOUR GENDER IS ");

                    puts(x);
         }
         else
                  printf("\n YOUR ARE JAY ===6");



}
