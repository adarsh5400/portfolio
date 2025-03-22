#include<stdio.h>
int main ()
{
float a,b;
float tot,sub,mul,div;
printf("enter number 1:");
scanf("%f",&a);
printf("enter number 2:");
scanf("%f",&b);
tot=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("total sum of a&b:%f",tot);
printf("substraction of a&b:%f",sub);
printf("multiplication of a&b:%f",mul);
printf("division of a&b:%f",div);
return 0;
}
