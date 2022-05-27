// create a file and read the file
#include <stdio.h>
int main()
{
    FILE *f;
    int x;
    f = fopen("E:\\PROGAMMING\\c\\FILE HANDLING\\new1.txt", "w");
    printf("\nENTER A NUMBER:");
    scanf("%d", &x);
    fprintf(f, "%d", x);
    fclose(f);
    // now opening this file again on console
    f = fopen("E:\\PROGAMMING\\c\\FILE HANDLING\\new1.txt", "r");
    fscanf(f, "%d", &x);
    // it have only pointer_name  more in agrumnwt of simple scanf
    printf("\n%d", x);
    fclose(f);
}