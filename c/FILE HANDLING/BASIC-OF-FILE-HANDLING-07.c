/*
four pre-defined functions to read contents from a file, defined in stdio.h header file:

    fgetc()– This function is used to read a single character from the file.
    fgets()– This function is used to read strings from files.
    fscanf()– This function is used to read the block of raw bytes from files. This is used to read binary files.
    fread()– This function is used to read formatted input from a file.
*/
#include <stdio.h>
int main()
{

  FILE *f;
  f = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\new5.txt", "r");
  char x;
  while ((x = fgetc(f)) != EOF)
  {
    printf("%c", x);
  }
  fclose(f);
  f = fopen("E:\\PROGAMMING\\GITHUB\\c\\FILE HANDLING\\new5.txt", "r");
  printf("\n");
  char z[100];
  /*
  fgets() reads one string at a time from the file.
  fgets() returns a string if it is successfully read by function or returns NULL if can not read.
  */
  while (fgets(z, 100, f) != NULL) // we can't use EOF with fgets
  {
    // fgets(char *str, int size, FILE * ptr);
    printf("%s", z);
  }

  fclose(f);
}