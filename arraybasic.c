//#include<stdio.h>
//int main()
//{
//int arr[5];
//for(int i=0;i<=5;i++)
//{
//printf("enter the element number %d\n",i+1);
//scanf("%d",&arr[i]);
//}
//for(int i=5;i>=0;i--)
//{
//printf("%d",arr[i]);
//}
//return 0;}

#include<stdio.h>
int main ()
{
	int marks[10]={95,90,31,25,100,50,65,89,97,30};
	for(int i=0;i<=10;i++)
	{
	if (marks[i]<35)
	{printf("%d",i);
	}
	}
	return 0;
}		
