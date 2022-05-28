//Q4-Write-a-program-in-C-to-read-an-existing-file.c
/*
Test Data :
Input the file name to be opened : test.txt
Expected Output :

 The content of the file test.txt is  :                                                                       
This is the content of the file test.txt.

*/
#include<stdio.h>
int main()
{
    FILE *f;
    char z[450];
    f = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\Q3.txt","r");
    printf("The content of the file test.txt is  :");

    printf("\n");
    while((fgets(z,450,f)!=NULL))
    {
       printf("%s",z);
    }
    fclose(f);
}