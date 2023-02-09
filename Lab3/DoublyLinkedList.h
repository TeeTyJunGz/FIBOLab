#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"
class DoublyLinkedList
{
    private:
        int size;
    public:
        Node* head;
        Node* tail;
        Node* cursor;
        DoublyLinkedList();
        void insert(Node* newNode, int pos);
        int getSize();


};
#endif