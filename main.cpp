#include <iostream>
#include "Queue.h"
#include "CircularQueue.h"

using namespace std;

void testQueue() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(50);
    q.enqueue(34);

    q.dequeue();
    q.dequeue();

    cout << "The front element in the queue is: " << q.frontElement() << endl;
}

void testCircularQueue() {
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(50);
    cq.enqueue(34);
    cq.enqueue(78);
    cq.enqueue(90);

    cq.dequeue();
    cq.dequeue();

    cq.enqueue(100);
    cq.enqueue(200);

    cout << "The front element in the circular queue is: " << cq.frontElement() << endl;
}

int main() {
    cout << "Testing Queue:" << endl;
    testQueue();

    cout << "\nTesting CircularQueue:" << endl;
    testCircularQueue();

    return 0;
}