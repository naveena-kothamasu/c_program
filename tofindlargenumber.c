#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c  values:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a is large");
    }
    else if( b>c)
    {
        printf("b is large");
    }
    else
    {
        printf("c is large");
    }
}
