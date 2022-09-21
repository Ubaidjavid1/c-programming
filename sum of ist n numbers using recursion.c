#include<stdio.h>
int main()
{ 
int n,z;
printf("enter a num ");
scanf("%d",&n);

    z= recsum(n);
    printf("the sum of ist %d numbers is %d",n,z);
}
   int recsum(int n)
   {  if (n==0)
     return 0;
   else 
     return n+recsum(n-1);
   }