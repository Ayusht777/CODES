#include <stdio.h>
#include<string.h>

int main()
{
    char s1[50], s2[50];
    int k, i, j;

    printf("Enter first string:");
    fgets(s1,sizeof s1,stdin);

    printf("Enter sub string:");
    fgets(s2,sizeof s2,stdin);

    //finding length of second string
    for (k = 0; s2[k] != '\0'; k++);

    for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == k)
    {
        printf("Substring found at position %d", i - j + 1);
    }
    else
    {
        printf("Substring not found");
    }

    return 0;
}
