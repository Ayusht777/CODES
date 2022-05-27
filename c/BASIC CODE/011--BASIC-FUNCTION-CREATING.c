#include<stdio.h>

int diff(int a,int b);
int main()
{
    int c;
    int a= 15;
    int b =5;
    c =diff(a,b);
    printf("%d",c);
}

int diff(int a,int b){
    return a -b;

}
