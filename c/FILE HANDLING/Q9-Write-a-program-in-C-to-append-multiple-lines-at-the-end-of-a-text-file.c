// Q9-Write-a-program-in-C-to-append-multiple-lines-at-the-end-of-a-text-file.c
/*
Assume that the content of the file test.txt is :
test line 1
test line 2
test line 3
test line 4

Test Data :
Input the file name to be opened : test.txt
Input the number of lines to be written : 3
The lines are :
test line 5
test line 6
test line 7
Expected Output :

The content of the file test.txt is  :
test line 1
test line 2
test line 3
test line 4

test line 5
test line 6
test line 7

*/
#include <stdio.h>
int main()
{
    FILE *f;
    char PATH[54];
    printf("\nENTER THE PATH:");
    gets(PATH);
    f = fopen(PATH, "r");
    char z[1000];
    while (fgets(z, sizeof(z), f) != NULL)
    {
        printf("%s", z);
    }
    fclose(f);
    int a;
    printf("\nInput the number of lines to be written :");
    scanf("%d", &a);
    f = fopen(PATH, "a");
    char s[100];
    printf("\nENTER NEW LINES:\n");
    for (int i = 0; i < a + 1; i++)
    {

        fgets(s, sizeof(s), stdin);
        fputs(s, f);
    }
    fclose(f);
    printf("\n");
    f = fopen(PATH, "r");
    while (fgets(z, sizeof(z), f) != NULL)
    {
        printf("%s", z);
    }
    fclose(f);
}