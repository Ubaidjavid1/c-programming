#include<stdio.h>
int main()
{ int n,i,a1=0,a2=1;
int nextTerm=a1+a2;

printf("enter the num of terms\n");
scanf("%d",&n);
  
  printf("fibonacii series:%d,%d,",a1,a2);
  
  for(i=3;i<=n;i++)
  {printf("%d,",nextTerm);
  a1=a2;
  a2=nextTerm;
  nextTerm=a1+a2;
  }

}