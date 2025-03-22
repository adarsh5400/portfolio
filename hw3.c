#include <stdio.h>
#include <stdlib.h>

	struct Node {
    	int data;
    	struct Node* next;
	};

	void removeDuplicates(struct Node* head) {
    	struct Node* current = head;
    	while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
        struct Node* temp = current->next;
        current->next = temp->next;
        free(temp);
        } else
        {
        current = current->next;
        }
    	}
	}
	void printList(struct Node* node) {
    	while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    	}
    	printf("\n");
	}
	int main() {
    	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    	head->data = 1;
    	head->next = (struct Node*)malloc(sizeof(struct Node));
    	head->next->data = 1;
    	head->next->next = (struct Node*)malloc(sizeof(struct Node));
    	head->next->next->data = 2;
    	head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    	head->next->next->next->data = 3;
    	head->next->next->next->next = NULL;
    	printf("Original Linked List: ");
    	printList(head);
    	removeDuplicates(head);
    	printf("Linked List after removing duplicates: ");
    	printList(head);
    return 0;
}
