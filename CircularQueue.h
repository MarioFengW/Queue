#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include "Queue.h"

class CircularQueue : public Queue {

    public:

        CircularQueue(int capacity);

        bool isFull();

        void enqueue(int value);

        void dequeue();
};

#endif