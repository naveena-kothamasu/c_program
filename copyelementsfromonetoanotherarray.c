#include<stdio.h>
int main()
{
    int a[10],b[10],i,n;

    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;++i)
    {
        printf("the copied array is%d\t\n",b[i]);
    }
}
    
    
       
