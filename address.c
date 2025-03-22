//#include<stdio.h>
//int main ()
//{
	//int arr[5]={1,2,3,4,5};
	//printf("%p\n",&arr[0]);
	//printf("%p\n",&arr[1]);
	//printf("%p\n",&arr[2]);
	//printf("%p\n",&arr[3]);
	//printf("%p\n",&arr[4]);
	//return 0;
//}

//#include<stdio.h>
//int main ()
//{
//	int num[26],temp;
//	num[0]=100;
//	num[25]=200;
//	temp=num[25];
//	num[25]=num[0];
//	num[0]=temp;
//	printf("\n%d%d",&num[0],num[25]);
//	return 0;
//}

#include<stdio.h>
int main ()
{
	int sub[50],i;
	for(i=0;i<=48;i++)
	{
	sub[i]=i;
	printf("\n%d",sub[i]);
	}
	return 0;
}			
	
