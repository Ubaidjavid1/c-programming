#include<stdio.h>
struct student
{ int rollno;
  char name[20];
  float marks;

};

   int main()
 {
    struct student  s[3];
    int i;
   for(i=0;i<3;i++)
    

{
    printf("enter rollno,name & marks of the student %d \n",i+1);
	scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].marks);
}

	
	printf("rollno \t name  \t marks \n");

	for(i=0;i<3;i++)
	{
	printf("%d\t %s\t %f \n",s[i].rollno,s[i].name,s[i].marks);
}
}