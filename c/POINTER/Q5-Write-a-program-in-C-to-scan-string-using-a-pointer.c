//Q5-Write-a-program-in-C-to-scan-string-using-a-pointer.c

#include<stdio.h>
//#include<string.h>
int main()
{
    char x[100];
    printf("\nENTER A STRING:");
    gets(x);
    char *y =x;
    int i;
    printf("\n");
    for(i=0;y[i]!='\0';i++)
    {
        printf("%c",*(y+i));    
   
    }
}