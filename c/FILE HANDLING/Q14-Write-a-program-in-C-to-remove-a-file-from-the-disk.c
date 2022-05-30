// Q14-Write-a-program-in-C-to-remove-a-file-from-the-disk.c
/*
Test Data :
Input the name of file to delete : test.txt
Expected Output :

 The file test.txt is deleted successfully..!!

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f1, *f2;
    char PATH1[100];
    printf("\nENTER FILE NAME:");
    scanf("%s", PATH1);
    if (f1 == NULL)
    {
        printf("\nFILE NOT EXIST:");
        exit(1);
    }
    int s;
    s = remove(PATH1);
    if (s == 0)
    {
        printf("\nFILE IS SUCCESFULLY DELTED!!");
    }
    else
    {
        printf("\nFILE IS NOT DELTED!!");
    }
}