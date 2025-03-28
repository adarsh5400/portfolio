
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5
struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};
void initializeQueue(struct Queue *q);
bool isEmpty(struct Queue *q);
bool isFull(struct Queue *q);
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
                if (isFull(&q)) {
                    printf("Queue is full. Cannot enqueue element.\n");
                } else {
                    printf("Enter the element to enqueue: ");
                    scanf("%d", &value);
                    enqueue(&q, value);
                }
                break;
            case 2:
                if (isEmpty(&q)) {
                    printf("Queue is empty. Cannot dequeue element.\n");
                } else {
                    value = dequeue(&q);
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
    q->front = q->rear = -1;
}
bool isEmpty(struct Queue *q) {
    return (q->front == -1 && q->rear == -1);
}
bool isFull(struct Queue *q) {
    return (q->rear + 1) % MAX_SIZE == q->front;
}
void enqueue(struct Queue *q, int value) {
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % MAX_SIZE;
    }
    q->items[q->rear] = value;
    printf("Enqueued element: %d\n", value);
}
int dequeue(struct Queue *q) {
    int value = q->items[q->front];
    if (q->front == q->rear) {
        initializeQueue(q);
    } else {
        q->front = (q->front + 1) % MAX_SIZE;
    }
    return value;
}
void traverse(struct Queue *q) {
    int i = q->front;
    do {
        printf("%d ", q->items[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (q->rear + 1) % MAX_SIZE);
    printf("\n");
}
void displayMenu() {
    printf("\nCircular Queue Operations Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Traverse (Display elements)\n");
    printf("4. Check if the queue is Empty\n");
    printf("5. Check if the queue is Full\n");
    printf("6. Exit\n");
}
