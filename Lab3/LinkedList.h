#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList
{
private:
    int size;
public:
    Node* head;
    Node* tail;
    Node* cursor;
    LinkedList();
    void insert(Node* newNode, int pos);
    int getSize();
};
#endif