// WAP to find the nth of a fibonacci series
#include <stdio.h>
int fib(int n)
{
    int t1 = 0, t2 = 1, nxt;
    for (int i = 2; i <= n; i++)
    {
        nxt = t1 + t2;
        t1 = t2;
        t2 = nxt;
    }
    return t1;
}

int main()
{
    int num;
    printf("Enter the value of n : ");
    scanf("%d", &num);
    printf("The %dth term of fibonacci series is %d", num, fib(num));
    return 0;
}
