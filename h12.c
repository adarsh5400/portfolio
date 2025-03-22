//insert elements in single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *current =NULL;
void  printlist()
{
struct node *ptr=head;
printf("\n[head]=>");
while(ptr !=NULL)
{
printf("%d=>",ptr->data);
ptr=ptr->next;
}
printf("[null]\n");
}
void insert(int data)
{
struct node *link=(struct node*)malloc(sizeof(struct node));
link->data=data;
link->next=head;
head=link;
}
int main ()
{
insert(10);
insert(20);
insert(30);
insert(40);
insert(50);
insert(1);
insert(2);
printlist();
return 0;
}
