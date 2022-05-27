//BASIC-OF-FUNCTION-05
//C Standard Library Functions
//#include <assert.h>
//it haev a function assert
// which check a certain condition after scanf in run time 
//if conditon is true than program will get continued
// and flase than it will get terminated and print Assertion failed:
 #include<assert.h>
 #include<stdio.h>
 #include<string.h>
 //syntax assert(condition)
 int main()
 {
     int x;
     char z[15];
     printf("\nENETR A NUMBER:");
     scanf("%d",&x);
     assert(x>=15);
     
     printf("\nENTER THE STRING:");
    // fgets(z,15,stdin);
    //doesnot work ?
    scanf("%s",&z);
     int a= strlen(z);
     assert(a<=10);
   


 }
