#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;

    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    for(i=0;i<n;++i)
    {
        if(a[i]%2==0)
    {
        sum=sum+a[i];
    }
    }
        printf("the sum of even array is %d",sum);
    
}
    
    
       
