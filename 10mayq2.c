#include<stdio.h>
#include<ctype.h>
int main ()
{
	int var1='M';
	int var2='m';
	if(isupper(var1))
	{
	printf("var1=|%c| is uppercase character\n",var1);
	}
	else
	{
	printf("var1=|%c| is not uppercase charcter\n",var1);
	}
	return 0;
}	 	
