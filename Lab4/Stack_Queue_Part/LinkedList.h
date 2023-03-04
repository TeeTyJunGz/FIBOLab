#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList
{
    public:
        LinkedList();
        void insert(Node* newNode, int pos);
        Node* remove(int pos);
        int getSize();
        void printList();
        void printHList();
    protected:
        int size;
        Node* head;
        Node* tail;
        Node* cursor;
};
#endif