//Program to find data type size in bytes
#include <stdio.h>
int main() {

  int i;
  float f;
  double d;
  char c;
// we do not use void because it is empty data type
   printf("size of int = %d byte",sizeof(i));
   printf("\nsize of float = %d byte",sizeof(f));
   printf("\nsize of double = %d byte",sizeof(d));
   printf("\nsize of char = %d byte",sizeof(c));

}
/*OUT :size of int = 4 byte
       size of float = 4 byte
       size of double = 8 byte
       size of char = 1 byte
*/
// here we used sizeof() function basically it tell the size of your function in bytes
// so we used %d in the printf statement not the float,char,double
// %d,%f,%c is a placeholder in printf statement where you want print number,char in int,float,char etc



