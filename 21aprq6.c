#include<stdio.h>
int main (void)
{
	int number[10];
	int count =10;
	int sum =0;
	float average =0.0f;
	printf("\n enter the 10 numbers:\n");
	int i;
	for(i=0;i<count;i++)
	{
	printf("%d>",i+1);
	scanf("%d",&number[i]);
	sum +=number[i];
	}
	printf("\n sum of the ten numbers entered is:%d\n",sum);
	average=(float)sum/count;
	printf("average of the ten numbers entered is:%f\n",average);
	return 0;
}	
