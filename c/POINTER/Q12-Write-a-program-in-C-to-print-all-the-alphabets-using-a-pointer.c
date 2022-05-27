//Q12-Write-a-program-in-C-to-print-all-the-alphabets-using-a-pointer.c
/*
Expected Output :

The Alphabets are :                                                                                         
 A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z 

*/
#include<stdio.h>
int main()
{
    char x[27];
    int y;
    char *z =x;// asigning the pointer 
    for(y=0;y<26;y++)
    {
        *z = y + 'A';
        z++;

    }
     z = x;// reasinging it 

    printf("The Alphabets are :  \n");
    for(y=0;y<26;y++)
    {
        printf("%c ",*z);
        z++;
    }
}