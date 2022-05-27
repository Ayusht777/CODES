/*here is teh basic code
#include<stdio.h>
int main()
{
   printf("hi");
   return 0;
}*/
// let's modify this code

// let's remove preprocessor
/*include<stdio.h>
int main()
{
   printf("hi");
   return 0;
}*/
// so it will give an error: expected '=', ',', ';', 'asm' or '__attribute__' before '<' token|
// because # is a preprocessor and your using a header file function which get in your code when only the include statement run by preprocessor
// SOLUTION
#include<stdio.h>
int main()
{
   printf("hi");
   return 0;
}

//OUT: hi
//TIP :The return 0; statement inside the main() function is the "Exit status" of the program. It's optional.





