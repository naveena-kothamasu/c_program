#include<stdio.h>
#include<math.h>
int main()
{
    int n,org,rem,sum=0;
    printf("enter n value");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
       rem=n%10;
       sum=sum+pow(rem,3);
      n=n/10;
    }
    if(org==sum)
    printf("%d is a armstrong",org);
    else
    printf("%d is not a armstrong",org);
    
}
