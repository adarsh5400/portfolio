#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 10
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};
void initializeQueue(struct Queue *q);
bool isFull(struct Queue *q);
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
                if (isFull(&q)) {
                    printf("Queue is full.\n");
                } else {
                    printf("Queue is not full.\n");
                }
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);
    return 0;
}
void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}
bool isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}
bool isEmpty(struct Queue *q) {
    return (q->front == -1 && q->rear == -1);
}
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue element.\n");
    } else {
        if (isEmpty(q)) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
        printf("Enqueued element: %d\n", value);
    }
}
int dequeue(struct Queue *q) {
    int value = -1;
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue element.\n");
    } else {
        value = q->items[q->front];
        if (q->front >= q->rear) {
            initializeQueue(q);
        } else {
            q->front++;
        }
    }
    return value;
}
void traverse(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
    } else {
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}
void displayMenu() {
    printf("\nQueue Operations Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Traverse (Display elements)\n");
    printf("4. Check if the queue is Empty\n");
    printf("5. Check if the queue is Full\n");
    printf("6. Exit\n");
}