//BASIC-OF-STRUCTURES-03
//We use the typedef keyword to create an alias name for data types. 
//It is commonly used with structures to simplify the syntax of declaring variables.
#include<stdio.h>

typedef struct s
{
    int y;
    float x;
}nd;
// now you can use nd as new data type in int main which is  predefined above
int main()
{
    nd a; //= struct s a
    printf("ENTER A FLOAT:");
    scanf("%f",&a.x);
    printf("\nENTER A INT:");
    scanf("%d",&a.y);
    printf("\nTHE FLOAT AND INT :%f %d",a.x,a.y);



}
