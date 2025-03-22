#include <stdio.h>
int main() 
{
    char s1[50], s2[50], i;
    printf("Enter string s1: ");
    scanf("%c",&s1);
    printf("Enter string s2: ");
    scanf("%c",&s2);
    fgets(s1,sizeof(s1),stdin);
    for (i = 0; s1[i] != '\0'; ++i) 
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}
