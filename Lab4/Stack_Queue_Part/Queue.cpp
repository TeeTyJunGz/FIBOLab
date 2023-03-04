#include <bits/stdc++.h>
#include "Queue.h"
using namespace std;

Queue row2;
Queue row3;

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
    // if (size == 0){

    //     tail = newNode;
    //     head = tail;
    //     size++;

    // }
    // else
    // {
    //     tail->setNext(newNode);
    //     tail = newNode;
    //     size++;
    // }
    insert(newNode, getSize());
}

void Queue::TorQueue(Node* newNode)
{
    // if (size == 0){

    //     tail = newNode;
    //     head = tail;
    //     size++;

    // }
    // else
    // {
    //     tail->setNext(newNode);
    //     tail = newNode;
    //     size++;
    // }
    if (newNode->getValue() % 2 == 0){
        if (row2.getSize() > 0)
        {
            if (row2.head > row3.head)
            {
                Node* temp;
                temp = row2.deQueue();
                row2.enQueue(newNode);
            }
        }
        else
        {
        row2.enQueue(newNode);
        }
    }
    else if (newNode->getValue() % 2 != 0){
        row3.enQueue(newNode);
    }
    if (row3.getSize() == 4)
    {
        cout << "row2"  << endl;
        row2.printList();
        cout << "row3"  << endl;
        row3.printList();
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
        return remove(0);
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