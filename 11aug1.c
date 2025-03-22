//Write a program to read two numbers and compare the numbers using function call by address.
#include<stdio.h>
        void compare(int *p, int *q)
	{
        if(*p>*q){
        printf("The first number is greater than the second number");
        }
        else if(*p<*q){
        printf("The second number is greater than the first number");
        }
        else
        {
        printf("The first number is equal to the second number");
        }
        }
        int main(){
        int a,b;
        printf("Enter the first number :");
        scanf("%d", &a);
        printf("Enter the second number :");
        scanf("%d", &b);
        compare(&a,&b);
        return 0;
}