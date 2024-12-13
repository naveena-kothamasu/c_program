// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,org,rev=0,rem=0;
   printf("enter n value");
   scanf("%d",&n);
   org=n;
   while(n!=0)
   {
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
       if(org==rev)
          printf("%d is a palindrome",org);
       
       else
       printf("%dis not a palindrome",org);
  
}
