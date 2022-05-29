// Q7-Write-a-program-in-C-to-count-a-number-of-words-and-characters-in-a-file.c
/*
Test Data :
Input the file name to be opened : test.txt
Expected Output :

 The content of the file test.txt are :
test line 1
test line 2
test line 3
test line 4
 The number of words in the  file test.txt are : 12
 The number of characters in the  file test.txt are : 36

*/
#include <stdio.h>
int main()
{
    FILE *f;
    char PATH[100];
    printf("\nENTER FILE NAME:\n");
    gets(PATH);
    f = fopen(PATH, "r");
    char x;
    int w = 0, c = 0;
    printf("\n");

    while ((x = getc(f)) != EOF)
    {
        if (x == ' ' || x == '\n')
        {
            w++;
        }
        else
            c++;
    }
    printf("\nThe number of words in the  file %s are : %d", PATH, w - 1);
    printf("\n The number of characters in the  file %s are : %d", PATH, c);
    fclose(f);
}
