// void pointer 
//this type of pointer can store base address of any data type 
#include<stdio.h>
#include<string.h>
int main()
{
    int x =45;
    void *p =&x;
    //printf("\nTHE ADRRESS = %p & CONTENT = %d",p,*p);
    //if you run this now without typecasting you will get this error
    // dereferencing 'void *' pointer
      printf("\nTHE ADRRESS = %p & CONTENT = %d",p,*(int*)p);
      // type casting syntax  *(int*)pointer

    // now let assign void pointer to any other data type
    char c = 'a';
    p =&c;
    printf("\nTHE ADRRESS = %p & CONTENT = %c",p,*(char*)p);

    //////////////////////////////////////////////////////
    float f = 5.24;
    p =&f;
    printf("\nTHE ADRRESS = %p & CONTENT = %.2f",p,*(float*)p);


    //////////////////////////////////////////////////////
    char *z = "ayush"; // char  with string

    
    printf("\nTHE BASE ADRRESS =  & CONTENT = %s",z);
     //////////////////////////////////////////////////////
    char *q ="aasss";
    printf("\nTHE CONTENT %s",q);


    //In the above program pointer to pointer 
    //typecasting *(char **)p is done to retrieve the string stored in a character pointer variable using void pointer.
    // char arr[] = "Hello World"; // array version
    //char *ptr = "Hello World";  // pointer version



    return 0;
}
