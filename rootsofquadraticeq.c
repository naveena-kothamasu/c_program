#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("the value of d is:%f\n",d);
    if(d>0)
    {
        printf("the roots are real&distinct\n");
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        printf("r1 and r2 values are:%f%f\n",r1,r2);
    }
    else if(d<0)
    {
        printf("the roots are real&imaginary");
    }
    else
    {
        printf("the root are real and equal");
        r1=r2=-b/(2*a);
        printf(" the values of r1 and r2:%f%f\n",r1,r2);
    }
    }
    
