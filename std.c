#include<stdio.h>
typedef struct Students_info
{
    int Roll;
    char name[20];
    int Section[10];
    
}
std;
int main()
{
    
    int num; 
    printf("ENTER THE NUMBER OF STUDENTS:\n");
    scanf("%d",&num);
    std s[num];
    for(int i=0;i<num;i++)
    {
        printf("ENTER ROLL NO, %d\n",i+1); 
        scanf("%d",&s[i].Roll);
        printf("ENTER NAME, %d\n",i+1);
        scanf("%s",s[i].name);
        printf("ENTER SECTION, %d\n",i+1);
        scanf("%s",s[i].Section);
       
    }
    for(int j=0;j<num;j++){
        printf("Roll No: %d\n",s[j].Roll);
        printf("NAME %s\n",s[j].name);
        printf("Section: %s\n",s[j].Section);
        
    }
}