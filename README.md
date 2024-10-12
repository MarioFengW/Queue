# Queue Implementation in C++

This project includes the implementation of a Queue data structure in C++ following the FIFO (First In, First Out) principle. The Queue supports standard operations such as enqueue, dequeue, front, and isEmpty. Additionally, a Circular Queue implementation is provided, which optimizes space usage by reusing elements when the queue reaches its limit.

## Table of Contents
- [Queue Structure](#queue-structure)
  - [Understanding the Queue](#understanding-the-queue)
  - [Complexity Analysis](#complexity-analysis)

## Queue Structure

### Understanding the Queue

A Queue is a linear data structure that follows the FIFO order. The first element added to the queue will be the first one to be removed. The primary operations of a Queue are:
- **enqueue**: Insert an element at the end of the queue.
- **dequeue**: Remove the first element from the queue.
- **front**: Retrieve the first element without removing it.
- **isEmpty**: Check if the queue is empty.

### Complexity Analysis

- **enqueue**: O(1) - Adding an element to the end of the queue is a constant-time operation.
- **dequeue**: O(1) - Removing the first element is also a constant-time operation.
- **front**: O(1) - Accessing the front element takes constant time.
- **isEmpty**: O(1) - Checking if the queue is empty is a constant-time operation.

### Circular Queue

The Circular Queue implementation extends the basic Queue by reusing space once elements are dequeued. This prevents unnecessary overflow conditions and optimizes memory usage.

