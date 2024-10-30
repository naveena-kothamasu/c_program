#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    switch(n%2)
    {
      case 0:printf("the given no is even");
      break;
      default:printf("the given no is odd");
      break;
    }
}
