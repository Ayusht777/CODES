//BASIC-OF-FILE-HANDLING-08
//ftell(file pointer)
//ftell() in C is used to find out the position of file pointer in the file with respect to starting of the file
#include<stdio.h>
int main()
{
    FILE *f;
    char x[101];
    f  = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\new5.txt", "r");
    fscanf(f,"%s",x);
    printf("\nTHE POSITION OF FILE POINTER %d",ftell(f));
    // its is printing 8  because the first string "asdasdsa" and it len is 7 but +1 for due to pointer moves ahead 
    fclose(f);

}