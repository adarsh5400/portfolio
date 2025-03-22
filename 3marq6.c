#include<stdio.h>
int main ()
{
	//enter the price of pen in paisa and rupees and display it in paisa
	int r,p,pi;
	printf("enter amount of rupees=\n");
	scanf("%d",&r);
	printf("enter amount of paisa=\n");
	scanf("%d",&p);
	pi=r*100+p;
	printf("inpaisa=%d\n",pi);
	return 0;
}	
