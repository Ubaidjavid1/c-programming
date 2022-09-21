#include<stdio.h>

int main()

{  int n,z;
    printf("enter any num \n");
    scanf("%d",&n);
   z= recfact(n);
   printf("factorial of %d is %d",n,z);
}
   int recfact(int n) 
{ 
 if(n==0)
   return 1;
    else
       return n*recfact(n-1);
   }