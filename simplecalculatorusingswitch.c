#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter a and b values and op value:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
    case '+': printf(" the addition is: %d",a+b);
              break;
    case '-': printf("the subtraction is:%d",a-b);
              break;    
    case '*': printf("the multiplication is:%d",a*b);
              break;
    case '/': printf("the division is:%d",a/b);
              break;
    case '%': printf("the remainder is:%d",a%b);
              break;
    default:  printf("invalid operator");
              break;
}
}
