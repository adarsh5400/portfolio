
//Write a menu driven program to implement linear queue operations such as Enqueue, Dequeue,
//IsEmpty, Traverse using single linked list.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node {
    int data;
    struct Node* next;
};
struct Queue {
    struct Node *front, *rear;
};
void initializeQueue(struct Queue *q);
bool isEmpty(struct Queue *q);
void enqueue(struct Queue *q, int value);
int dequeue(struct Queue *q);
void traverse(struct Queue *q);
void displayMenu();
int main() {
    struct Queue q;
    initializeQueue(&q);
    int choice, value;
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;
            case 2:
                value = dequeue(&q);
                if (value != -1) {
                    printf("Dequeued element: %d\n", value);
                }
                break;
            case 3:
                printf("Queue elements:\n");
                traverse(&q);
                break;
            case 4:
                if (isEmpty(&q)) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 5);
    return 0;
}
void initializeQueue(struct Queue *q) {
    q->front = q->rear = NULL;
}
bool isEmpty(struct Queue *q) {
    return (q->front == NULL);
}
void enqueue(struct Queue *q, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation error. Cannot enqueue element.\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (isEmpty(q)) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("Enqueued element: %d\n", value);
}
int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    }
    struct Node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    free(temp);
    if (q->front == NULL) {
        q->rear = NULL;
    }
    return value;
}
void traverse(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* current = q->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void displayMenu() {
    printf("\nQueue Operations Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Traverse (Display elements)\n");
    printf("4. Check if the queue is Empty\n");
    printf("5. Exit\n");
}