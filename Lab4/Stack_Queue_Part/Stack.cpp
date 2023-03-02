#include <bits/stdc++.h>
#include "Stack.h"
using namespace std;

Stack::Stack()
{
    head = NULL;
    tail = NULL;
    cursor = NULL;
    size = 0;
}

Stack::~Stack()
{

}

void Stack::Push(Node* newNode)
{
    // newNode->setNext(head);
    // head = newNode;
    // size++;
    insert(newNode, 0);
}

Node* Stack::Pop()
{
    if (size == 0)
    {
        cout << "*** Your Stack is Empty ***";
        return NULL;
    }
    else
    {
        // cursor = head;
        // head = head->getNext();
        // size--;
        // return cursor;
        return remove(0);
    }
}

Node* Stack::Peek()
{
    if (size == 0)
    {
        cout << "*** Your Stack is Empty ***";
        return NULL;
    }
    else
    {
        return head;
    }
}