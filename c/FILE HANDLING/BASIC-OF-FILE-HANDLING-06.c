//a
//Opens a text file for writing in appending mode. 
//If it does not exist, then a new file is created. 
//Here your program will start appending content in the existing file content.
#include<stdio.h>
int main()
{
    FILE *f;
    f = fopen("E:\\PROGAMMING\\c\\FILE HANDLING\\new.txt","a");
    int x;
    for(int i =0;i<5;i++){
    printf("\nENETR A INT:");
    scanf("%d",&x);
    fprintf(f,"%d",x);
    fscanf(f,"%d",&x);
    printf("%d",x);
    }
    fclose(f);
}
