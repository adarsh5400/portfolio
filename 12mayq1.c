#include <stdio.h>  
#include <string.h>  
   int main() 
   // wap to input a statement and count the number of words 
{  
    char sentence[] = "adarsh kumar";  
    int wordCount = 0;  
    for(int i = 0; i < strlen(sentence)-1; i++) 
    {  
    if(sentence[i] == ' ' && (sentence[i+1]) && (i > 0)) 
    {  
    wordCount++;  
    }  
    }    
    wordCount++;  
    printf("Total number of words in the given string: %d", wordCount);  
    return 0;  
}   
