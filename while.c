#include<stdio.h>
int main ()
{
    int n;
    printf("enter total number to be printed:");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d",n);
        n--;
    }
    printf("\n");
    return 0;
}
