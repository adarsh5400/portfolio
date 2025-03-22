//Write a program to create a single linked list of n nodes and perform the following menu based
//operations on it using function:
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a single node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a node at the end of the linked list
void insertNode(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to delete a node from a specific position in the linked list
void deleteNode(struct Node **head, int position) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    if (position == 1) {
        struct Node *temp = *head;
        *head = temp->next;
        free(temp);
        return;
    }

    struct Node *prev = NULL;
    struct Node *temp = *head;
    int i;

    for (i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position to delete.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to count the number of nodes in the linked list
int countNodes(struct Node *head) {
    int count = 0;
    struct Node *current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

// Function to traverse and print the linked list
void traverseList(struct Node *head) {
    struct Node *current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int n, choice, value, position;

    printf("Enter the number of nodes in the linked list: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter the value for node %d: ", i);
        scanf("%d", &value);
        insertNode(&head, value);
    }

    printf("\nMenu:\n");
    printf("1. Insert a node at a specific position\n");
    printf("2. Delete a node from a specific position\n");
    printf("3. Count nodes\n");
    printf("4. Traverse the linked list\n");
    printf("5. Exit\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertNode(&head, value);
                traverseList(head);
                break;
            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteNode(&head, position);
                traverseList(head);
                break;
            case 3:
                printf("Number of nodes: %d\n", countNodes(head));
                break;
            case 4:
                traverseList(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
