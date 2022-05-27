//Q5-Write-a-program-in-C-to-scan-string-using-a-pointerV2
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
    while(*y!='\0')
    {
        printf("%c",*y++);
          
   
    }
}