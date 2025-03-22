//In addition to 4.1, perform following operations using function on the single linked list:
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to create a linked list with n nodes
void createList(int n) {
    struct Node* newNode, * temp;
    int data, i;

    if (n <= 0) {
        printf("Invalid input for the number of nodes\n");
        return;
    }

    head = (struct Node*)malloc(sizeof(struct Node));

    if (head == NULL) {
        printf("Unable to allocate memory");
        exit(0);
    }

    printf("Enter data of node 1: ");
    scanf("%d", &data);

    head->data = data;
    head->next = NULL;

    temp = head;

    for (i = 2; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            printf("Unable to allocate memory");
            break;
        }

        printf("Enter data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

// Function to display the linked list
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to insert a node at a specific position
void insert(int position, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* temp = head;
        for (int i = 1; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Function to delete a node from a specific position
void delete(int position) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;

    if (position == 1) {
        head = head->next;
        free(temp);
    } else {
        for (int i = 1; i < position - 1; i++) {
            temp = temp->next;
        }
        struct Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        free(nodeToDelete);
    }
}

// Function to count the number of nodes in the list
int countNodes() {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to search for an element in the list
int search(int key) {
    struct Node* temp = head;
    int position = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

// Function to sort the list in ascending order
void sort() {
    struct Node* current = head;
    struct Node* index = NULL;
    int temp;

    if (head == NULL) {
        return;
    } else {
        while (current != NULL) {
            index = current->next;

            while (index != NULL) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

// Function to reverse the list
void reverse() {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

int main() {
    int choice, position, data, key;
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    while (1) {
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Count nodes\n");
        printf("4. Display the linked list\n");
        printf("5. Search an element\n");
        printf("6. Sort the list in ascending order\n");
        printf("7. Reverse the list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        

        switch (choice) {
            case 1:
                printf("Enter the position and data: ");
                scanf("%d %d", &position, &data);
                insert(position, data);
                break;
            case 2:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                delete(position);
                break;
            case 3:
                printf("Number of nodes: %d\n", countNodes());
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                position = search(key);
                if (position == -1) {
                    printf("Element not found\n");
                } else {
                    printf("Element found at position %d\n", position);
                }
                break;
            case 6:
                sort();
                printf("List sorted in ascending order\n");
                break;
            case 7:
                reverse();
                printf("List reversed\n");
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
                printf("-------------------------------------------------------------------------------------\n");
        }
    }

    return 0;
}
