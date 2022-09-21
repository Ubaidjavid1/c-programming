#include<stdio.h>
int main()
{int x[5],i,s,flag=0;
  printf("enter your numbers\n");
    for(i=0;i<=4;i++)
{	scanf("%d",&x[i]);
 }
 printf("enter the number you want to search");
 scanf("%d",&s);
  for(i=0;i<=4;i++)
  {if(s==x[i])
     {
	   flag=1;
      
	  printf("found");
	  
      break;}
}
 if(flag==0)
 
   printf("not found");
  return 0;

}