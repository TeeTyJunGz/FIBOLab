#ifndef STACK_H
#define STACK_H
#include "LinkedList.h"

class Stack: public LinkedList
{
    public:
        Stack();
        ~Stack();
        void Push(Node* newNode);
        void cardPush(Node* newNode);
        Node* Pop();
        Node* Peek();
};


#endif