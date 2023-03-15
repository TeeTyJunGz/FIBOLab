#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    cursor = NULL;
    size = 0;
}

void LinkedList::insert(Node* newNode, int pos)
{
    if (pos == 0)
    {
        if (size == 0)
        {
            cursor = newNode;
            cursor->setNext(head);
            head = cursor;
            tail = head;
            size++;
        }
        else
        {
            cursor = newNode;
            cursor->setNext(head);
            head = cursor;
            size++;
        }
    }
    else if (pos == size && pos != 0)
    {
        newNode->setNext(NULL);
        cursor = head;
        
        for (int i = 0; i < size-1; i++)
        {
            cursor = cursor->getNext();
        }
        
        cursor->setNext(newNode);
        tail = cursor->getNext();
        size++;
    }
    else
    {
        if (pos < size && pos > 0)
        {
            cursor = head;
            for (int i = 0; i < pos-1; i++)
            {
                cursor = cursor->getNext();
            }
            newNode->setNext(cursor->getNext());
            cursor->setNext(newNode);
            size++;
        }
        else
        {
            cout << "*** LinkedList Size Out Of Range ***" << endl;
        }
    }
    
}

Node* LinkedList::remove(int pos)
{
    if (pos == 0)
    {
        Node* temp = head;
        head = head->getNext();
        size--;
        return temp;
    }
    else if (pos == size-1 && pos != 0)
    {
        cursor = head;
        for (int i = 0; i < pos-1; i++)
        {
            cursor = cursor->getNext();
        }
        Node* temp = cursor->getNext();
        cursor->setNext(NULL);
        size--;
        return temp;
    }
    else
    {
        if (pos < size && pos > 0)
        {
            cursor = head;
            for (int i = 0; i < pos-1; i++)
            {
                cursor = cursor->getNext();
            }
            Node* temp = cursor->getNext();
            cursor->setNext(cursor->getNext()->getNext());
            size--;
            return temp;
        }
        else
        {
            cout << "*** LinkedList Size Out Of Range ***" << endl;
            return NULL;          
        }
    }
}

int LinkedList::getSize()
{
    return size;
}

void LinkedList::printList(){

    while (head != NULL)
    {
        cout << head->getValue() << endl;
        head = head->getNext();
    }
}

void LinkedList::printHList(){

    while (head != NULL)
    {
        cout << head->getValue() << ", ";
        head = head->getNext();
    }
    cout << endl;
}

