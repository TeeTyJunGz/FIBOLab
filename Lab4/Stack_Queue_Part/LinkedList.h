#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList
{
    public:
        int size;
        Node* head;
        Node* tail;
        Node* cursor;
        LinkedList();
        void insert(Node* newNode, int pos);
        void remove(int pos);
        int getSize();
};
#endif