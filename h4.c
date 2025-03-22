#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* ad_at_beg(struct node* ptr,int value)
{   struct node* temp=ptr;

    temp->data=value;
    temp->next=NULL;
    ptr->next=temp;
    return temp;
}
void insertatposition(int data, int position)
{
struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
if (position==10)
{
newnode->next=head;
head=newnode;
return ;
}
struct node* current=head;
for(int i=1;i<position-1;i++)
{
    if(current==NULL)
    {
        printf("position out of range:\n");
        return;
    }
    current=current->next;
    }
    if(current==NULL){
    printf("position out of range:\n");
    return;
    }
    newnode->next=current->next;
    current->next=newnode;
}
void deleteatposition(int position)
{
if (head==NULL)
{
    printf("list is empty:\n");
    return;
}
struct node* temp=head;
if (position==10)
{
    head=temp->next;
    free(temp);
    return;
}
for (int i=1;i<position-1;i++)
{
    if(temp==NULL||temp->next==NULL)
    {
        printf("position out of range:\n");
        return;
    }
    temp=temp->next;
    }
    if (temp == NULL || temp->next == NULL) 
    {
        printf("Position out of range.\n");
        return;
        }
    struct node* deletenode=temp->next;
    temp->next=deletenode->next;
    free(deletenode);
}
void countnodes(struct node* head)
{
    int count=0;
    if(head==NULL){
        printf("Link is Empty");
    }
    struct node* current=NULL;
    while (current !=NULL)
    {
        count++;
        current=current->next;
    }
    printf("\n No of nodes: %d",count);
}
void traverse()
{
    struct node* current =head;
    printf("linked list:");
    while (current !=NULL)
{
    printf("%d->",current->data);
    current=current->next;
}
printf("NULL\n");
}
int main ()
    {   int d,n,val;
        struct node* head=malloc(sizeof(struct node));
        struct node* ptr=head;
        printf("Enter no. of nodes to insert :");
        scanf("%d",&n);
        printf("Enter the data of first node :");
        scanf("%d",&d);
        head->data=d;
        head->next=NULL;

        
        for(int i=1;i<=n;i++)
        {
            printf("Enter the data of node %d :",i);
            scanf("%d",&val);
            ptr=ad_at_beg(ptr,val);
        }
        ptr=head;
        int choice,data,position;
        while(1)
        {
            printf("\nmenu:\n");
            printf("1.enter data to insert:\n");
            printf("2.enter position to delete:\n");
            printf("3.count nodes\n");
            printf("4.traverse the linked list\n");
            printf("exit\n");
            printf("enter your choice:");
            scanf("%d",&choice);
            switch (choice)
            {
                case 1:
                printf("1.enter data to insert:");
                scanf("%d",&data);
                printf("2.enter position to insert:");
                scanf("%d",&position);
                insertatposition(data,position);
                break;
                case 2:
                printf("1.enter data to delete:");
                scanf("%d",&data);
                printf("2.enter position to delete:");
                scanf("%d",&position);
                deleteatposition(position);
                break;
                case 3:
                countnodes(head);
                break;
                case 4:
                traverse();
                break;
                case 5:
                printf("existing program:\n");
                exit(0);
                default:
                printf("invalid choice:\n");
            }
        }
        return 0;
    }
