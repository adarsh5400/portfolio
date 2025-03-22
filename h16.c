//change element data in single linked list
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
struct node *link=(struct node*) malloc(sizeof(struct node));
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
printf("\n[head]=>");
while(ptr!=NULL)
{
printf("%d=>",ptr->data);
ptr=ptr->next;
}
printf("[null]\n");
}
void update_data(int old,int new)
{
int pos=0;
if(head==NULL)
{
printf("linked list is not initialized");
return;
}
current=head;
while(current->next!=NULL)
{
if(current->data==old)
{
current->data=new;
printf("\n%d found at position %d, replaced with %d\n",old,pos,new);
return;
}
current=current->next;
pos++;
}
printf("%d does not exist in the list\n",old);
}
int main ()
{
insert(76);
insert(67);
insert(84);
insert(48);
insert(92);
insert(54);
display();
update_data(48,54);
display();
return 0;
}

