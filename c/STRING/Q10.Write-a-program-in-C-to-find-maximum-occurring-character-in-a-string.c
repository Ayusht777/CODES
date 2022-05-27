//Q10.Write a program in C to find maximum occurring character in a string.

#include <stdio.h>
#include<string.h>

int main(){
   char s[100];
   int f[255]={0};
   int i = 0,maximum,v;
   printf("Enter the string:");
   fgets(s,sizeof s,stdin);

   /* Finds frequency of each characters */

   while(s[i] != '\0'){
      v = (int)s[i];
      f[v]++;//here we are increasing the value of f[97]=0 -->1
      i++;

   }

   i=0;
   /* Finds maximum frequency */
   maximum = 0;
   for(i=0; i<255; i++){
      if(f[i] > f[maximum])
         maximum = i;
      }
      printf("Maximum occurrence character is '%c' = %d times.", maximum,
      f[maximum]);
   return 0;
}
