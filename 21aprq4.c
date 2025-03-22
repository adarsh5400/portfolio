#include<stdio.h>
int main() {
	int a[4],b[4],c[4],i;
	printf("Enter First array->");
	for(i=0;i<4;i++)
	scanf("%d",&a[i]);
	printf("\nEnter Second array->");
	for(i=0;i<4;i++)
	scanf("%d",&b[i]);
	printf("Arrays before swapping");
	printf("\nFirst array->");
	for(i=0;i<4;i++) {
	printf("%d",a[i]);
	}
	printf("\nSecond array->");
	for (i=0;i<4;i++) {
	printf("%d",b[i]);
	}
	for(i=0;i<4;i++) {
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("\nArrays after swapping");
	printf("\nFirst array->");
	for(i=0;i<4;i++) {
	printf("%d",a[i]);
	}
	printf("\nSecond array->");
	for(i=0;i<4;i++) {
	printf("%d",b[i]);
	}
	return 0;
}
