#include<stdio.h>
int main ()
{
	int array[10]={2,4,6,8,10,12,14,16,18,20};
	int *p;
	p=&array[0];
	printf("%d%d%d",*p,*(p+1),*(p+2));
	printf("%d",*(p++));
	printf("%d",*(++p));
	printf("%d",*(p--));
	printf("%d",*(--p));
	return 0;
}	
	
