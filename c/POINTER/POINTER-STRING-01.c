//Accessing string via pointer  
#include<stdio.h>
int main()
{
  char x[10] = "ayush";//creating a char array to store char as string
  char *y =x; // creating char pointer to store base address of x[0] in  it 
  /////////////////////////////////////////////////////////////////////////
  // you can use while or for loop
  for(;*y!='\0';y++) // here we donot requried i and we are increasing address of y pointer 
  // 1001-->1002
  {
     printf("%c",*y);// here we are printing char one by one by using *y 

  }
  //*y !='\0' it means content on *y is not be equal to NULL
}