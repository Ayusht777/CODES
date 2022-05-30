// Q12-Write-a-program-in-C-to-encrypt-a-text-file.c
/*
 Assume that, the content of the file test.txt is  :
Welcome to w3resource.com.

Test Data :
Input the name of file to encrypt : test.txt
Expected Output :

File test.txt successfully encrypted ..!!

If you read the file test.txt you will see the following :

������Ʉ�ӄۗ�������ɒ��ђn

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
    else
    {
        f1 = fopen(PATH1, "r");
        f2 = fopen("encrypted.txt", "w");
        char s;
        while ((s = fgetc(f1)) != EOF)
        {
            s = s + 40;
            fputc(s, f2);
        }
        fclose(f1);
        fclose(f2);
        printf("\nFILE IS SUCCESFULLY CREATED");
    }
}