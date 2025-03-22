///reverse doubled linked list
#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *prev;
struct node *next;
};
struct node *head=NULL;
struct node *last=NULL;
struct node *current=NULL;
void printlist()
{
struct node *ptr=head;
printf("\n[head]<=>");
while(ptr!=NULL)
{
printf("%d<=>",ptr->data);
ptr=ptr->next;
}
printf("[last]\n");
}
void print_backward()
{
struct node *ptr=last;
printf("\n[head]<=>");
while(ptr!=NULL)
{
printf("%d<=>",ptr->data);
ptr=ptr->prev;
}
printf("[last]\n");
}
void insert(int data)
{
struct node *link=(struct node*)malloc(sizeof(struct node));
link->data=data;
link->prev=NULL;
link->next=NULL;
if(head==NULL)
{
head=link;
return;
}
current=head;
while(current->next!=NULL)
current=current->next;
current->next=link;
last=link;;
link->prev=current;
}
int main ()
{
insert(2);
insert(4);
insert(6);
insert(8);
insert(10);
insert(12);
printlist();
print_backward();
return 0;
}
