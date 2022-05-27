//Q9-Write-a-program-in-C-to-check-whether-two-given-strings-are-an-anagram.c
/*
Test Data :
Input the first String : spare
Input the second String : pears
Expected Output :

 spare and pears are Anagram.    

*/
#include<stdio.h>
#include<string.h>
int an(char *,char *);
int main()
{
    char s1[100],s2[100];
    printf("\nENTER A FIRST STRING:");
    fgets(s1,100,stdin);
    printf("\nENTER A SECOND STRING:");
    fgets(s2,100,stdin);
    if(an(s1,s2)==1)
    {
        printf("THE STRING %s AND %s ARE ANAGRAM:\n\nsp",s1,s2);
    }
    else
    {
        printf("\nTHE STRING %s AND %s ARE NOT ANAGRAM:",s1,s2);
    }

}
int an(char *s1 ,char *s2)// it will return a int value
{
    int i1[256]={0},i2[256]={0},i=0;
    // 256  because max ascii is 256 and we put all element to null
    if(strlen(s1)!=strlen(s2))
    {// check the length of the two string
        return 0;
    }
    for(;s1[i]!='\0';i++)
    {
        i1[s1[i]]++;
        //it will increease the value of any ascii at index of int as ascii
        // i1[97]=1
    }
    for(i=0;s2[i]!='\0';i++)
    {
        i2[s2[i]]++;
        
    }
    for(i=0;i<256;i++)
    {
        if( i1[i] != i2[i])
        {
            return 0;
        }
    }
    return 1;

}