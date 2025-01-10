#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    float  avg;
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    avg=sum/n;
    printf("the sum of the elements is %d\n",sum);
      printf("the average of the elements is %f",avg);
}
