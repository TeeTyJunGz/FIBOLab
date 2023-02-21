#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList
{
    private:
        int size;
        Node* head;
        Node* tail;
        Node* cursor;
    public:
        LinkedList();
        void insert(Node* newNode, int pos);
        void remove(int pos);
        int getSize();
};
#endif
