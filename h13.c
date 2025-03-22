//reverse the elements of single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void reverse_print(struct node *list)
{
if(list==NULL)
{
printf("[NULL]=>");
return;
}
reverse_print(list->next);
printf("%d=>",list->data);
}
void insert(int data)
{
struct node *link=(struct node*)malloc(sizeof(struct node));
link->data=data;
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
}
int main ()
{
insert(21);
insert(13);
insert(60);
insert(65);
insert(87);
insert(1);
reverse_print(head);
return 0;
}
