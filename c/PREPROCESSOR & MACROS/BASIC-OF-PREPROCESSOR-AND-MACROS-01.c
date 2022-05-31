// BASIC-OF-PREPROCESSOR-&-MACROS-01
/*
The C preprocessor is a macro preprocessor (allows you to define macros)
 that transforms your program before it is compiled. These transformations can be the inclusion of header files, macro expansions, etc.

All preprocessing directives begin with a # symbol. For example,

#define PI 3.14
*/

#include <stdio.h>
#define PI 3.14
int main()
{
   float r, a;
   printf("\nENTER THE RADIUS:");
   scanf("%f", &r);
   a = r * r * PI;
   printf("\nTHE AREA OF CRICEL IS : %.2f", a);
}