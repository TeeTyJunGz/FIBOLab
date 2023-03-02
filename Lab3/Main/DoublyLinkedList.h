#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"
class DoublyLinkedList
{
    private:
        int size;
        Node* head;
        Node* tail;
        Node* cursor;
    public:
        DoublyLinkedList();
        void insert(Node* newNode, int pos);
        void remove(int pos);
        int getSize();
        void printDList();


};
#endif