//BASIC-OF-FILE-HANDLING-05
//Reading from a binary file
/*
Function fread() also take 4 arguments similar to the fwrite() function as above.

fread(addressData, sizeData, numbersData, pointerToFile);
*/
#include<stdio.h>
int main()
{
    FILE *f;
    int a;
    f = fopen("E:\\PROGAMMING\\c\\FILE HANDLING\\new.bin", "rb");
    // rb is read in binary 
   
    fread(&a,sizeof(a),1,f);
    //fread(addressData, sizeData, numbersData, pointerToFile);
    printf("\n%d",a);
    fclose(f);
}