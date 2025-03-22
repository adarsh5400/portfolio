#include <stdio.h>
int main()
{
   char str[20];
   printf("%s", str);
   scanf("%[^\n]%*s", str);
   return 0;
}
