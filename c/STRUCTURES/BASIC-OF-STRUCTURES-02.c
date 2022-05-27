// BASIC-OF-STRUCTURES-02
#include <stdio.h>
struct s
{
    char name[100];
    char add[100];
    int num;

} d; // here i am giving this struct s = d  ( new name )
// which we can use in int main
int main()
{
    printf("\nENTER THE NAME:");
    gets(d.name);
    printf("\nENTER THE ADDRESS:");
    gets(d.add);
    printf("\nENTER THE HOUSE NUMBER:");
    scanf("%d", &d.num);
    printf("\nTHE NAME ,ADDRESS,NUMBER:%s,%s,%d", d.name, d.add, d.num);
}
