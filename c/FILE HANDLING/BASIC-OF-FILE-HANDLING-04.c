//BASIC-OF-FILE-HANDLING-04
// write in binary mode
/*
Reading and writing to a binary file

Functions fread() and fwrite() are used for reading from and writing to a file on the disk respectively in case of binary files.
Writing to a binary file

To write into a binary file, you need to use the fwrite() function. The functions take four arguments:

    address of data to be written in the disk
    size of data to be written in the disk
    number of such type of data
    pointer to the file where you want to write.

fwrite(addressData, sizeData, numbersData, pointerToFile);
*/
#include<stdio.h>
int main()
{
    FILE *f;
    int a;
    f = fopen("E:\\PROGAMMING\\c\\FILE HANDLING\\new.bin", "wb");
    // wb is write in binary 
    printf("\nENTER A NUMBER:");
    scanf("%d",&a);
    fwrite(&a,sizeof(a),1,f);
    //fwrite(addressData, sizeData, numbersData, pointerToFile);
    fclose(f);

}