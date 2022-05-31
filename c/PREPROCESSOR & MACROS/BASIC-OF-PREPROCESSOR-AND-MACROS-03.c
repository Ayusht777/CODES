// BASIC-OF-PREPROCESSOR-AND-MACROS-02
/*
Conditional Compilation

In C programming, you can instruct the preprocessor whether to include a block of code or not. To do so,
conditional directives can be used.

It's similar to a if statement with one major difference.

The if statement is tested during the execution time
to check whether a block of code should be executed or not whereas,
the conditionals are used to include (or skip) a block of code in your program before execution.
*/
/*
Uses of Conditional

    use different code depending on the machine, operating system
    compile the same source file in two different programs
    to exclude certain code from the program but to keep it as a reference for future purposes

*/
// conditional, #ifdef, #if, #defined, #else and #elif
/*#ifdef MACRO
   // conditional codes
#endif
*/
// Here, the conditional codes are included in the program only if MACRO is defined.

//////////////////////////////////////////////////////////////////////////////////////////
/*
Predefined Macros
_DATE__

The current date as a character literal in "MMM DD YYYY" format.
2

__TIME__

The current time as a character literal in "HH:MM:SS" format.
3

__FILE__

This contains the current filename as a string literal.
4

__LINE__

This contains the current line number as a decimal constant.
5

__STDC__

Defined as 1 when the compiler complies with the ANSI standard.
*/
#include <stdio.h>
int main()
{
    printf("Current DATE: %s", __DATE__);
    printf("\nCurrent TIME: %s", __TIME__);
    printf("\nCurrent FILE: %s", __FILE__);
    printf("\nCurrent LINE NO: %d", __LINE__);
    printf("\nANSI: %d", __STDC__);
}