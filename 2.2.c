#include<stdio.h>
int main ()
{
float fah,cel;
printf("enter fahrenheit value:");
scanf("%f",&fah);
cel=(fah-32)*5/9;
printf("celcius value:%f",cel);
return 0;
}
