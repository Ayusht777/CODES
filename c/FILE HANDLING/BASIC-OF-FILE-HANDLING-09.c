// BASIC-OF-FILE-HANDLING-09
// The fseek() function will move the file pointer to a file, based on the option that we give it.
// syntax: fseek(FILE* POINTER, int offset, int position);
/*
 specify the starting position (offset
 Here, position can take the following macro values:

    SEEK_SET -> We place the initial position at the start of the file, and shift from there.
    SEEK_CUR -> The initial position is taken at the current position of the existing file pointer.
    SEEK_END -> We place the initial position at the end of the file.
                If you shift the pointer from this position, you will reach EOF.
*/
// NOTE: In case of SEEK_END, the offset position is measured backwards,
// so we’ll be moving from the end of the file!
/*
TEXT IN new5.txt
asdasdsa asdasdnsa j
sadadasdas
*/
#include <stdio.h>
int main()
{
    FILE *f;
    char x[101];
    f = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\new5.txt", "r");
    fseek(f, 6, SEEK_SET);
    // this will move file pointer to 6
    printf("\nTHE POSITION OF FILE POINTER %d\n", ftell(f));
    while (fgets(x, 100, f) != NULL)
    {
        printf("%s", x);
    }
    // its is printing 8  because the first string "asdasdsa" and it len is 7 but +1 for due to pointer moves ahead
    fclose(f);
}