//Q1 1. Write a program in C to show the basic declaration of pointer
/*Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
 -------------------------------------------------------------------                                                     
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50    
 */                                                      

#include<stdio.h>
int main()
{
   int m=10,n,o;
   int *z =&m;
   printf("\nz stores the address of m  = %p",z);
   printf("\n*z stores the value of m = %d",*z);
   printf("\n&m is the address of m = %p",z);
   printf("\n&n stores the address of n =%p\n&o  stores the address of o = %p",n,o);
   printf("\n&z stores the address of z = %p",z);

}