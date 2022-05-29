// Q11-Write-a-program-in-C-to-merge-two-files-and-write-it-in-a-new-file.c
/*
Assume that the content of the file test.txt and test1.txr is :
 The content of the file test.txt is  :
This is the file test.txt.

 The content of the file test1.txt is  :
This is the file test1.txt.

Test Data :
Input the 1st file name : test.txt
Input the 2nd file name : test1.txt
Input the new file name where to merge the above two files : mergefiles.txt
Expected Output :

 The two files merged into mergefiles.txt file successfully..!!

Here is the content of the merge file mergefiles.txt :

 The content of the file mergefiles.txt is  :
This is the file test.txt.
This is the file test1.txt.

*/
#include <stdio.h>
int main()
{
    FILE *f1, *f2, *f3;
    char PATH1[100];
    char PATH2[100];
    char PATH3[100];
    printf("\nENTER THE FILE NAME 1:");
    fgets(PATH1, sizeof(PATH1), stdin);
    f1 = fopen(PATH1, "r");
    printf("\nENTER THE FILE NAME 2:");
    fgets(PATH2, sizeof(PATH2), stdin);
    f2 = fopen(PATH2, "r");
    printf("\nENTER THE FILE NAME 3:");
    fgets(PATH3, sizeof(PATH3), stdin);
    f3 = fopen(PATH3, "w");
    char s1;
    while ((s1 = getc(f1)) != EOF)
    {

        fputc(s1, f3);
        fputc('\n', f3);
    }
    fclose(f1);
    fclose(f3);
    f3 = fopen(PATH3, "a");
    char s2;
    char z = '\n';
    while ((s2 = getc(f2)) != EOF)
    {

        fputc(s2, f3);
        fputc('\n', f3);
    }
    printf("\nTHE CONTENT OF 3RD FILE:\n");
    char s3[100];
    while (fgets(s3, sizeof(s3), f3) != NULL)
    {
        printf("%s", s3);
    }
    fclose(f3);
    fclose(f2);
    
}