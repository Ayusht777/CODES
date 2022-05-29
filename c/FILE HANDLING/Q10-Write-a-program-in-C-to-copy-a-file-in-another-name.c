// Q10-Write-a-program-in-C-to-copy-a-file-in-another-name.c
/*
Assume that the content of the file test.txt is :
test line 1
test line 2
test line 3
test line 4

Test Data :
Input the source file name : test.txt
Input the new file name : test1.txt
Expected Output :

 The file test.txt  copied successfully in the file test1.txt.

If you read the new file you will see the content of the file :

test line 1
test line 2
test line 3
test line 4

*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f1, *f2;
    char PATH[100];
    printf("\nENTER FILE PATH:");
    gets(PATH);
    f1 = fopen(PATH, "r");
    if (f1 == NULL)
    {
        printf("\nFILE DOESNOT EXITS");
    }

    f2 = fopen("copy.txt", "w");
    char a1;
    while ((a1 = fgetc(f1)) != EOF)
    {
        printf("%c", a1);

        putc(a1, f2);
    }
    fclose(f1);
    fclose(f2);

    f2 = fopen("copy.txt", "r");
    char z;
    while ((z = fgetc(f1)) != EOF)
    {
        printf("%c", z);
    }
    fclose(f1);
}
