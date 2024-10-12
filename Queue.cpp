#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(int capacity) {
    front = -1;
    rear = -1;
    this->capacity = capacity;
    queue = new int[capacity];
}

bool Queue::isEmpty() {
    return front == -1;
}

bool Queue::isFull() {
    return rear == capacity - 1;
}

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full" << endl;
        return;
    }

    if (front == -1) {
        front = 0;
    }

    queue[++rear] = value;
    cout << value << " Enqueued to queue" << endl;
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << queue[front] << " Dequeued from queue" << endl;
    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

int Queue::frontElement() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return queue[front];
}

Queue::~Queue() {
    delete[] queue;
}