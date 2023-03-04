#ifndef QUEUE_H
#define QUEUE_H
#include "LinkedList.h"

class Queue: public LinkedList
{
    public:
        Queue();
        ~Queue();
        void enQueue(Node* newNode);
        void TorQueue(Node* newNode);
        Node* deQueue();
        Node* Peek();
};

#endif