#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    printf("the value of s:%f",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle:%f",area);
}
