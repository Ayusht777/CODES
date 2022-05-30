// Q13-Write-a-program-in-C-to-decrypt-a-previously-encrypted-file-file.c
/*
 Assume that, the content of the file test.txt was  :
������Ʉ�ӄۗ�������ɒ��ђn

After encryption, the content of the file is :
Welcome to w3resource.com.

Test Data :
Input the name of file to decrypt : test.txt
Expected Output :

The file test.txt decrypted successfully..!!

Now, if you read the file test.txt you will see the following :

Welcome to w3resource.com.
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
        f2 = fopen("decrypted.txt", "w");
        char s;
        while ((s = fgetc(f1)) != EOF)
        {
            s = s - 40;
            fputc(s, f2);
        }
        fclose(f1);
        fclose(f2);
        printf("\nFILE IS SUCCESFULLY CREATED");
    }
}