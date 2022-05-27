// SRTRING USING FGETS RATHER THAN GETS
//syntax : fgets(name, sizeof(char array name), stdin)
// where name is char array name and sizeof is size of array
//Note: The gets() function can also be to take input from the user. However, it is removed from the C standard.

//It's because gets() allows you to input any length of characters. Hence, there might be a buffer overflow.
#include<stdio.h>
#include<string.h>
int main()
{
     char x[5];
     printf("ENTER YOUR FULL NAME:");
     fgets(x,sizeof(x),stdin);
     printf("\nYOUR NAME IS %s",x);
}
