#include<stdio.h>

int main()
{  int n,f;
   printf("enter any num   ");
   scanf("%d",&n);
    f=fact(n);
    printf("the factoraial of %d is %d",n,f);
    return 0;
}
    int fact(int n)
    { int i,f=1;
      for(i=n;i>0;i--)
        f=f*i;
        return(f);
	}