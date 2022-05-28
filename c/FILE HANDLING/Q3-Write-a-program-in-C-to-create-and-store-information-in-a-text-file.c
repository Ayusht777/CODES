//Q3-Write-a-program-in-C-to-create-and-store-information-in-a-text-file.c
/*
Test Data :
Input a sentence for the file : This is the content of the file test.txt.
Expected Output :

 The file test.txt created successfully...!! 

*/
#include<stdio.h>
int main()
{
    FILE *f;
    char z[450];
    f = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\Q3.txt","w");
    printf("Input a sentence for the file :");
    fgets(z,450,stdin);
    fprintf(f,"%s",z);
    fclose(f);
}