#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        sum=sum+i;
    }
    printf("the sum is:%d",sum);
}
