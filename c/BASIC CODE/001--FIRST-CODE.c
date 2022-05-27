// This is the comment sign of commnet in c
#include<stdio.h>
int main()
{
    printf("Hello ayush");

}
// out: Hello ayush

/* This Symbol For more line comments */
/*SOME BASIC HISTORY OF C
C is a procedural programming language.
It was initially developed by Dennis Ritchie as a system programming language to write operating system.
The main features of C language include low-level access to memory, simple set of keywords, and clean style,
these features make C language suitable for system programming like operating system or compiler development.*/

//Structure of a C program
/* HEADER --> #include<stdio.h>
   main() --> int main()
   scope  --> {

                       }
   Variable declaration --> int a = 55;
   body   -->  printf("%d,a)
   Return --> return 0;

*/
// # --> this symbol represent the preprocessor means it say's hey c do not compile this line to understand it. it is already define
// include<> --> this means use the library/header file which already contains some function and use this library now.
// stdio.h --> this a .h (header) file which tells hey c this library contains some function in it
/* int main() --> The int was written before main indicates return type of main().
The value returned by main indicates the status of program termination
this the main function where program execute means all the code we write go into it and than get compile*/

/* {} --> In C language, a pair of curly brackets define scope and are mainly used in functions and control statements
          like if, else, loops. All functions must start and end with curly brackets. */
/* printf() -->  printf() is a standard library function to print something on standard output.
                The semicolon at the end of printf indicates line termination. In C, a semicolon is always used to indicate end of a statement.*/
/* return 0; --> The return statement returns the value from main().
                 The returned value may be used by an operating system to know the termination status of your program.
                 The value 0 typically means successful termination.*/

/* to run this code
1.) we have to compile the file with F9 key and run it with F10 key
*/
/*Q1.NOW WHAT IS A COMIPLER?
 ANS. IN SIMPLE A WORD A COMPILER IS A PROGRAM WHICH CONVERTS THE WHOLE CODE IN MACHINE LEVEL LANGUAGE (0,1).SO IT WILL ALSO TELL'S YOU SYNTAX ERROR IN THE CODE*/
/*Q2.What to do when a C program produces different results in two different compilers?
ANS. IN SOME IDE LIKE TURBO C++ USE VOID BEFORE MAIN BUT IN SOME THERE IS INT BEFORE MAIN FUNCTION SO ACCORDING TO STANDARD C11. THERE SHOULD NOT BE A VOID BEFORE
     MAIN FUNCTION, SO IT DEPENDS UPON COMPILER TO COMPILER.

// some basic theory of c https://www.tutorialspoint.com/cprogramming/c_basic_syntax.htm



