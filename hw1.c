//Print the middle of a given linked list
#include <stdio.h>
#include <stdlib.h>
	struct Node 
	{
    	int data;
    	struct Node* next;
	};
	void printMiddle(struct Node* head) 
	{
    	if (head == NULL) 
    	{
        printf("Linked list is empty.\n");
        return;
    	}
    	struct Node *slow_ptr = head, *fast_ptr = head;
    	while (fast_ptr != NULL && fast_ptr->next != NULL) 
    	{
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    	}
    	printf("Middle element(s): %d\n", slow_ptr->data);
	}
	int main() 
	{
    	struct Node* head = NULL;
        printMiddle(head);
    return 0;
}
