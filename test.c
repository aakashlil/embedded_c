#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 // Define the maximum size of the queue

#define true 1
#define false 0

struct CircularQueue {
    int items[SIZE];
    int front;
    int rear;
    int isFull;
    int isEmpty;
};

// Function to create an empty circular queue
void initQueue(struct CircularQueue* q) {
    q->front = 0;
    q->rear = 0;
    q->isFull = false;
    q->isEmpty = true;  // Initially, the queue is empty
}

// Function to check if the queue is full
int isFull(struct CircularQueue* q) {
    return q->isFull;
}

// Function to check if the queue is empty
int isEmpty(struct CircularQueue* q) {
    return q->isEmpty;
}

// Function to add an element to the queue (enqueue)
void enqueue(struct CircularQueue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }
    q->items[q->rear] = value;
    q->rear = (q->rear + 1) % SIZE;  // Circular increment

    if (q->rear == q->front)
        q->isFull = true;

    q->isEmpty = false;

    printf("Inserted %d\n", value);
}

// Function to remove an element from the queue (dequeue)
int dequeue(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    int data = q->items[q->front];
    q->front = (q->front + 1) % SIZE;  // Circular increment

    q->isFull = false;

    if (q->rear == q->front)
        q->isEmpty = true;

    return data;
}

// Function to display the queue
void display(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    int i = q->front;
    while (1) {
        printf("%d ", q->items[i]);
        if (i == q->rear && !q->isFull)  // Stop if the end of the queue is reached and it's not full
            break;
        i = (i + 1) % SIZE;
        if (i == q->front && q->isFull)  // Stop if the queue is full and has wrapped around
            break;
    }
    printf("\n");
}
int main() {
    struct CircularQueue q;
    initQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    display(&q);

    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    display(&q);

    enqueue(&q, 6);
    enqueue(&q, 7);

    display(&q);

    return 0;
}
