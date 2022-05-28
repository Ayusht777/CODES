// BASIC-OF-FILE-HANDLING-10
#include <stdio.h>
int main()
{
    FILE *f;
    char x[101];
    f = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\new5.txt", "r");
    fseek(f, 0, SEEK_END);
    // the offset will be 0 because we donot the last number of pointe rin the file
    printf("\nTHE POSITION OF FILE POINTER %d\n", ftell(f));
    /*while (fgets(x, 100, f) != NULL)
    // it will not work due to file pinter is at last
    {
        printf("%s", x);
    }
    */
    // its is printing 8  because the first string "asdasdsa" and it len is 7 but +1 for due to pointer moves ahead
    fclose(f);
}