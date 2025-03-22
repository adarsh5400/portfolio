#include <stdio.h>    
int main ()  
{  
    char upr, lwr;   
    int ascii;  
    printf (" Enter the lower Case Character: ");  
    scanf (" %c", &lwr);  
    ascii = lwr - 32;  
    printf (" %c character in upper case is: %c", lwr, ascii);    
    printf (" \n Enter the upper Case Character: ");  
    scanf (" %c", &upr);  
    ascii = lwr + 32;  
    printf (" %c character in the lower case is: %c", upr, ascii);  
    return 0;  
}  
