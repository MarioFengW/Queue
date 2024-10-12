#include <iostream>
#include "CircularQueue.h"

using namespace std;

CircularQueue::CircularQueue(int capacity) : Queue(capacity) {}

bool CircularQueue::isFull() {
    return (rear + 1) % capacity == front;
}

void CircularQueue::enqueue(int value) {
    if (isFull()) {
        cout << "Circular queue is full" << endl;
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear = (rear + 1) % capacity; // Use modulo for circular behavior
    queue[rear] = value;
    cout << value << " Enqueued to the circular queue" << endl;
}

void CircularQueue::dequeue() {
    if (isEmpty()) {
        cout << "Circular queue is empty" << endl;
        return;
    }

    cout << queue[front] << " Dequeued from the circular queue" << endl;

    if (front == rear) {
        front = rear = -1; // Reset the queue
    } else {
        front = (front + 1) % capacity; // Use modulo for circular behavior
    }
}