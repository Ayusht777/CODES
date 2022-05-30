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
#include <stdlib.h>
int main()
{
    FILE *f1, *f2, *f3;
    char PATH1[100];
    char PATH2[100];
    char PATH3[100];
    printf("\n---------------------------------------");
    printf("\nENTER THE FILE NAME 1:");
    scanf("%s", PATH1);
    f1 = fopen(PATH1, "r");
    printf("\nENTER THE FILE NAME 2:");
    scanf("%s", PATH2);
    printf("\n---------------------------------------");
    f2 = fopen(PATH2, "r");
    if (f1 == NULL || f2 == NULL)
    {
        printf("\nFILE DOESNOT EXIST");
        exit(1);
        // this statement will break the program
    }

    else
    {
        printf("\nENTER THE FILE NAME 3:");
        scanf("%s", PATH3);
        f3 = fopen(PATH3, "w");
        printf("\n---------------------------------------");
        if (f3 == NULL)
        {
            printf("\nTHE FILE NOT CRETAED");
            exit(1);
        }
        else
        {
            char s1;

            while ((s1 = fgetc(f2)) != EOF)
            {

                fputc(s1, f3);
            }
            fputc('\n', f3);
            // this will add new line to it
            while ((s1 = fgetc(f1)) != EOF)
            {

                fputc(s1, f3);
            }
            fputc('\n', f3);
            fclose(f1);
            fclose(f2);
            fclose(f3);
            printf("\n------------------------------------------");
            printf("\nMERGE FILE CONTENT :%s", PATH3);
            f3 = fopen(PATH3, "r");
            char s2[100];
            while (fgets(s2, sizeof(s2), f3) != NULL)
            {
                printf("\n%s", s2);
            }
            fclose(f3);
        }
    }
}