//Q8-Write-a-program-in-C-to-count-the-number-of-vowels-and-consonants-in-a-string-using-a-pointer.c
/*
Test Data :
Input a string: string
Expected Output :
Number of vowels : 1                                                                                         
Number of constant : 5
*/
#include<stdio.h>
int main()

{
    char x[100];
    printf("Input a string:");
    gets(x);
    char *l =x;
    int v=0,c=0;
   
    for(;*l!='\0';l++)
    {
        if(*l=='A'||*l=='I'||*l=='O'||*l=='U'||*l=='E'||*l=='a'||*l=='i'||*l=='o'||*l=='u'||*l=='e')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("\nTHE STRING IS :");
    puts(x);
    printf("\nTHE NUMBERS OF VOWELS:%d",v);
    printf("\nTHE NUMBERS OF CONSTANT:%d",c);
}