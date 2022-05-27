//String Manipulations In C Programming Using strcmpi() Functions
//syntax :strcmpi(str1,str2/any"word")
//strcmp( ) function in C compares two given strings and returns zero if they are same and also does not case sensitive.
//Returns: This function returns 0 if the given two strings are same,
//a negative value if the length of str1 is less then the length of str2
//and if the length of str1 is greater then str2 then this function returns a positive value.
#include<stdio.h>
#include<string.h>
// C program to demonstrate
// example of strcmpi() function

#include <stdio.h>
#include <string.h>

int main( )
{
char str1[] = "geeks" ;
char str2[] = "Geeks" ;

int j = strcmpi ( str1, str2 ) ;

printf ( "The function returns = %d",j ) ;
return 0;
}


