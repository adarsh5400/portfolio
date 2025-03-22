//Add 1 to a number represented as linked list
#include <stdio.h>
#include <stdlib.h>
	struct Node 
	{
    	int data;
    	struct Node* next;
	};
	struct Node* createNode(int data) 
	{
    	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    	newNode->data = data;
    	newNode->next = NULL;
    	return newNode;
	}
	void makeMiddleNodeHead(struct Node** headRef) 
	{
    	if (*headRef == NULL || (*headRef)->next == NULL) 
    	{
        return; // List is empty or has only one node
    	}
    	struct Node* slowPtr = *headRef;
    	struct Node* fastPtr = *headRef;
    	struct Node* prevSlowPtr = NULL;
    	while (fastPtr != NULL && fastPtr->next != NULL) 
    	{
        fastPtr = fastPtr->next->next;
        prevSlowPtr = slowPtr;
        slowPtr = slowPtr->next;
    	}
    	prevSlowPtr->next = slowPtr->next;
    	slowPtr->next = *headRef;
    	*headRef = slowPtr;
	}
	void printList(struct Node* head) 
	{
    	struct Node* current = head;
    	while (current != NULL) 
    	{
        printf("%d ", current->data);
        current = current->next;
    	}
    	printf("\n");
	}
	int main() 
	{
    	struct Node* head = createNode(1);
    	head->next = createNode(2);
    	head->next->next = createNode(3);
    	head->next->next->next = createNode(4);
    	head->next->next->next->next = createNode(5);
    	printf("Original List: ");
    	printList(head);
    	makeMiddleNodeHead(&head);
    	printf("List after making middle node head: ");
    	printList(head);
    	return 0;
}
