// Q5-Write-a-program-in-C-to-read-the-file-and-store-the-lines-into-an-array.c
/*
Test Data :
Input the file name to be opened : test.txt
Expected Output :

 The content of the file test.txt  are :
 test line 1
 test line 2
 test line 3
 test line 4

*/
#include <stdio.h>
int main()
{
    FILE *f;
    char PATH[100];
    printf("\nENTER THE PATH FOR FILE:");
    scanf("%s", PATH);
    // do not add full path just new of txt
    f = fopen(PATH, "w");
    int n;
    printf("\nENTER A NUMBER OF LINES:");
    scanf("%d", &n);

    printf("\nENTER A INFO:");
    char d[100];

    for (int i = 0; i < n+1; i++)
    {
        fgets(d, sizeof(d),stdin);
        fputs(d,f);
        
    }
    fclose(f);
    f = fopen(PATH, "r");
    printf("\nThe content of the file %s are :", PATH);
    char x[100];
    while (fgets(x, 100, f) != NULL)
    {
        printf("%s\n", x);
    }
    fclose(f);
}