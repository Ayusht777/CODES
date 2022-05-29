// Q6-Write-a-program-in-C-to-Find-the-Number-of-Lines-in-a-Text-File.c
/*
Test Data :
Input the file name to be opened : test.txt
Expected Output :

The lines in the file test.txt are : 4

*/
#include <stdio.h>
int main()
{
    FILE *f;
    char PATH[100];
    printf("\nENTER FILE NAME:");
    scanf("%s", PATH);
    f = fopen(PATH, "r");
    int l = 0;
    char z;
    while ((z = fgetc(f)) != EOF)
    {
        if (z == '\n')
        {
            l++;
        }
    }
    fclose(f);
    printf("\nTE NUMBER OF LINES %d", l);
}