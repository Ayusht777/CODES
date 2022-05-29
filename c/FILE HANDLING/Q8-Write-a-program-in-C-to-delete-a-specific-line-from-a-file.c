// Q8-Write-a-program-in-C-to-delete-a-specific-line-from-a-file.c
/*Assume that the content of the file test.txt is :
test line 1
test line 2
test line 3
test line 4

Test Data :
Input the file name to be opened : test.txt
Input the line you want to remove : 2
Expected Output :

 The content of the file test.txt is :
test line 1
test line 3
test line 4
*/
#include <stdio.h>
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
    int tl = 1;
    char a1;
    while ((a1 = fgetc(f1)) != EOF)
    {
        printf("%c", a1);
        }
    rewind(f1);
    // it will just rewind the file pointer to 0
    int del;
    printf("\nENTER LINE NO YOU WANT TO DELETE:");
    scanf("%d", &del);

    f2 = fopen("temp.txt", "w");
    while ((a1 = fgetc(f1)) != EOF)
    {
        if (a1 == '\n')
        {
            tl++;
        }

        if (tl != del)
        {
            putc(a1, f2);
        }
    }
    fclose(f1);
    fclose(f2);
    remove(PATH);
    rename("temp.txt", PATH);
    printf("\n%s", PATH);
    printf("\nAFTER REMOVLE OF LINE\n");
    f1 = fopen(PATH, "r");
    char z;
    while ((z = fgetc(f1)) != EOF)
    {
        printf("%c", z);
    }
    fclose(f1);
}