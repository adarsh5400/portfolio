//search elements in single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
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
void find_data(int item)
{
int pos=0;
if(head==NULL)
{
printf("linked list not initialized");
return;
}
current=head;
while(current->next!=NULL)
{
if(current->data==item)
{
printf("%d found at position %d\n",item,pos);
return;
}
current=current->next;
pos++;
}
printf("%d does not exist in the list",item);
}
int main ()
{
insert(12);
insert(21);
insert(32);
insert(23);
insert(43);
insert(34);
find_data(35);
find_data(25);
return 0;
}
