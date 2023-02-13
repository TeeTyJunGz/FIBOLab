#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

Queue::Queue()
{
    head = NULL;
    tail = NULL;
    cursor = NULL;
    size = 0;
}

Queue::~Queue()
{

}

void Queue::enQueue(Node* newNode)
{
    if (size == 0){

        tail = newNode;
        head = tail;
        size++;

    }
    else
    {
        tail->setNext(newNode);
        tail = newNode;
        size++;
    }
}

Node* Queue::deQueue()
{
    if (size == 0)
    {
        cout << "*** Your Queue is Empty ***";
        return NULL;
    }
    else
    {
        cursor = head;
        head = head->getNext();
        size--;
        return cursor;
    }
}

Node* Queue::Peek()
{
    if (size == 0)
    {
        cout << "*** Your Queue is Empty ***";
        return NULL;
    }
    else
    {
        return head;
    }
}