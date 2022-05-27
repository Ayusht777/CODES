//BASIC-OF-RECURSION-01
//A function that calls itself is known as a recursive function. And, this technique is known as recursion.
/*
basic layout
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
*/
//he recursion continues until some condition is met to prevent it.
//To prevent infinite recursion, if...else statement
// (or similar approach) can be used where one branch makes the recursive call, and other doesn't.
// to find sum of any number
#include<stdio.h>
int s(int n);
int main()
{
  int x;
  printf("\nENTER A NUMBER:");
  scanf("%d",&x);
  int z = s(x);
  printf("\nTHE NUMBER %d AND SUM %d",x,z);

}
int s(int n)
{
    if(n!=0)
    {
        return(n + s(n-1));
        // here we are decreasing the value of n and retuning again to s
    }
    else
      return n;
}
/*
Advantages and Disadvantages of Recursion

Recursion makes program elegant. However, if performance is vital, use loops instead as recursion is usually much slower.

That being said, recursion is an important concept. It is frequently used in data structure and algorithms.
 For example, it is common to use recursion in problems such as tree traversal.
*/