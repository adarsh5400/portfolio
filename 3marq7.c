#include<stdio.h>
int main ()
{
	//enter price of a pen in paisa and print it in rupees and paisa
	int r,p,pi;
	printf("enter price in paisa=\n");
	scanf("%d",&p);
	r=p/100;
	pi=p%100;
	printf("%drupees%dpaisa",r,pi);
	return 0;
}	
