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

void Queue::intQueue(int newInt)
{
    Node* newNode = new Node(newInt,NULL);
    insert(newNode, getSize());
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

int Queue::intDeQueue()
{
    if (size == 0)
    {
        cout << "*** Your Queue is Empty ***";
        return NULL;
    }
    else
    {
        return remove(0)->getValue();
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

int Queue::intPeek()
{
    if (size == 0)
    {
        cout << "*** Your Queue is Empty ***";
        return NULL;
    }
    else
    {
        return head->getValue();
    }
}