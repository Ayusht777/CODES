//Q7.Write a program in C to count total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[100];
    printf("program to count total number of alphabets, digits and special characters in a string");
    printf("\nENTER A STRING:");
    fgets(x,sizeof x,stdin);
    int i,a,d,s;
    a=d=s=0;
    while(x[i]!='\0')
    {
             if(x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z')
             {
                  a++;
             }
             else if(x[i]>='0'&&x[i]<='9'){
                  d++;
             }
             else
                  s++;
         i++;

    }
   printf("\nTHE TOTAL ALPHABETS:%d",a);

   printf("\nTHE TOTAL DIGITS:%d",d);
   printf("\nTHE TOTAL SPECIAL CHARACTERS:%d",s);//white spaces are also a special charatcer

}
