#ifndef QUEUE_H
#define QUEUE_H

class Queue {
protected:
    int* queue;
    int front;
    int rear;
    int capacity;

public:
    Queue(int capacity);
    ~Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    void dequeue();
    int frontElement();
};

#endif 