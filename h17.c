//remove an element from single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
struct node *prev=NULL;
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
void display()
{
struct node *ptr=head;
printf("head]=>");
while(ptr!=NULL)
{
printf("%d=>",ptr->data);
ptr=ptr->next;
}
printf("[NULL]\n");
}
void remove_data(int data)
{
int pos=0;
if(head==NULL)
{
printf("linked list not initialized");
return;
}
if(head->data==data)
{
if(head->next!=NULL)
{
head=head->next;
return;
}
else
{
head=NULL;
printf("list is empty now");
return;
}
}
else if(head->data!=data && head->next==NULL)
{
printf("%d not found in the list\n",data);
return;
}
current=head;
while(current->next!=NULL && current->data!=data)
{
prev=current;
current=current->next;
}
if(current->data==data)
{
prev->next=prev->next->next;
free(current);
}
else
printf("%d not found in the list:",data);
}
int main ()
{
insert(10);
insert(20);
insert(30);
insert(1);
insert(40);
insert(56);
printf("before removal:");
display();
remove_data(30);
printf("after removal:");
display();
return 0;
}

