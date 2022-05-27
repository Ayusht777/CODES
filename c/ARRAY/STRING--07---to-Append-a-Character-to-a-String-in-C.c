// to Append a Character to a String in C
//  strncat() function
// synatx : strncat(char *dest, const char *src, size_t n)
/*
     Parameters: This method accepts the following parameters:


    dest: the string where we want to append.
    src: the string from which ‘n’ characters are going to append.
    n: represents the maximum number of character to be appended. size_t is an unsigned integral type.

*/

#include<stdio.h>
#include<string.h>
void main()
{
         char x[6]="ayush";// array should have space to add it so create it n+1
         char y ='t';

         printf("\nTHE ORGINAL STRING:%s",x);
         printf("\nTHE CHARACTER TO APPEND:%c",y);

         strncat(x,&y,1);// & is use to give address of char y and  for it size
         // if you increase the size from 1 to n than it will going to attach the starting to string to it at last
         printf("\nTHE FINAL STRING %s",x);

}
