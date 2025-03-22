#include<stdio.h>
int main ()
{
	char*array[]={"papa","break","stupid","bacha","chacha","chachi"};
	char**b[]={array+3,array+2,array+1,array+5,array,array+4};
	char***c=b;
	*c++;
	printf("%s",*++*++c);
	printf("%s",++**(c+2));
	printf("%c",*++**c+2);
	return 0;
}	
	
