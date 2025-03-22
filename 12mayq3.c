#include<stdio.h>
#include<string.h>
int main ()
{
	//wap to input a string and check whether it is palindrome or not
    char str[20];
    int i, length;
    int a = 0;
    printf("Enter a string:");
    scanf("%s", str);
    length = strlen(str);
    for(i=0;i < length ;i++)
    {
    if(str[i] != str[length-i-1])
    {
    a = 1;
    break;
    }
    }
    if (a) 
    {
    printf("%s is not a palindrome", str);
    }    
    else 
    {
    printf("%s is a palindrome", str);
    }
    return 0;
}
