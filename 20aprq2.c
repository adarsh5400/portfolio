#include<stdio.h>
int main()
{ 

    for(int i=1;i<=9;i++)
    {   
        for(int j=1;j<=i;j++)
        {   if(j==1||i==9)
                printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
}
