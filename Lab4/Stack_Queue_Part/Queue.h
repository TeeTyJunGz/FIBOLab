#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

class Queue: public LinkedList
{
    public:
        Queue();
        ~Queue();
        void enQueue(Node* newNode);
        void intQueue(int newInt);
        Node* deQueue();
        int intDeQueue();
        Node* Peek();
        int intPeek();
};

#endif