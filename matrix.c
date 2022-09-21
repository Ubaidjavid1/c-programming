#include<stdio.h>
int main()
{int x[100][100],i,j,m,n;

printf("enter the order of  matrix \n");
scanf("%d %d",&m,&n);
        
 printf("enter the elements of matrix \n");
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
       { scanf("%d",&x[i][j]);}
       
printf("matrix is \n");
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	      {printf("%d  ",x[i][j]);
	}
	printf("\n");}
return 0;   		      
}