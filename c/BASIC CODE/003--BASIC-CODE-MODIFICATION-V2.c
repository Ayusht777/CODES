//let's remove int before main function
/*#include<stdio.h>
 int main()
{
    printf("a");

}*/
// OUT: a

// the output has come but why we use int than
// because int say hey os this is int data type and make a 4 byte space for it in ram
// and for return zero compiler by default add this statement to it
// in Computer 0 = false , 1 = true means return 0 tells hey compiler their is no error in the code

//lets change return 0 into return 5
#include<stdio.h>
 int main()
{
    printf("a");
    return 5;
}
//OUT : a
// here we type return 5 but compiler ignore it means where are telling c that this program have 5 error but when compiler. compile it than it will say it is not
// correct so it ignore it


