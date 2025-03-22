//wap to input a string and display the nth word
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() 
	{ 
 	char *test = "select * from mytable ;" ;  
        int nthword(test, 3) ; 
	{ 
	char ret[80];            
	int i=0;     
	int wordnum=0;    
	char *prev; 
  	prev = NULL;   
        while ( *str != '\0' ) 
  	{                      
     	if (!isspace(*str) )               
     	{          
        if ( (prev == NULL ) || isspace(prev) ) wordnum++; 
        if (wordnum == num) ret[i] = *str;  
        i++;
        str++; 
        prev = str - 1;         
     	} 
     	else if (isspace(*str) ) 
     	{                  
       	str++; 
       	prev = str - 1;                         
     	}   
  	}  
  	ret[i] = '\0' ;     
  	printf("%s \n", ret); 
        }         
        return 0;  
}
