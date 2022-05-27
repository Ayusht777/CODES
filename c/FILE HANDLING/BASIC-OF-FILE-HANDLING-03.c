//BASIC-OF-FILE-HANDLING-03
//file in append mode
#include<stdio.h>
int main()
{
    FILE *f;
    int n;
    f = fopen("E:\\PROGAMMING\\c\\FILE HANDLING\\new.txt", "a");
    // this will not overwrite the file
    fscanf(f,"%d",&n);
    printf("\n%d",n);
    fclose(f);


}