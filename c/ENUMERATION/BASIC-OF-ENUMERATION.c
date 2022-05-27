//BASIC-OF-ENUMERATION
//In C programming, an enumeration type (also called enum) 
//is a data type that consists of integral constants. To define enums, the enum keyword is used.
/*
enum flag {const1, const2, ..., constN};

By default, const1 is 0, const2 is 1 and so on. 
You can change default values of enum elements during declaration (if necessary).
*/
#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
    // creating today variable of enum week type
    enum week today;
    today = Thursday;
    printf("Day %d",today+1);
    return 0;
}