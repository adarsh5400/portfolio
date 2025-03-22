
#include <stdio.h>
int main()
{
// WAP to show the use of pointer
    int *p, **q, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    p = &num;
    q = &p;
    printf("%d %d %d\n", num, *p, **q);
    return 0;
}
