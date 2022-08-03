#include<stdio.h>
int main()
{ int n,i,flag=0;
   printf("enter a number  ");
   scanf("%d",&n);
 if(n==0||n==1) 
   flag=1;
    
for(i=2;i<n;i++)   
 {if(n%i==0)
   flag=1;
   break;
	}
   if(flag==0) 
   { printf("%d is prime ",n);
   }
if(flag==1)
  printf("%d is not prime",n);
  
return 0;
}