#include <bits/stdc++.h>
#include "DoublyLinkedList.h"
using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
    head = NULL;
    tail = NULL;
    cursor = NULL;
    size = 0;
}

void DoublyLinkedList::insert(Node* newNode, int pos)
{
    if (pos == 0)
    {   
        if (size == 0)
        {
            cursor = newNode;
            cursor->setNext(head);
            head = cursor;
            tail = head;
            head->setPrev(NULL);
            size++;
        }
        else
        {
            cursor = newNode;
            if (head != NULL)
            {
                head->setPrev(cursor);
            }
            cursor->setNext(head);
            head = cursor;
            head->setPrev(NULL);
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
        if (tail != NULL)
        {
            tail->setPrev(cursor);
        }
        size++;
    }
    else
    {
        if (pos < size)
        {
            cursor = head;
            for (int i = 0; i < pos-1; i++)
            {
                cursor = cursor->getNext();
            }
            newNode->setNext(cursor->getNext());
            cursor->setNext(newNode);
            cout << cursor->getValue() << endl;
            if (cursor->getNext() != NULL)
            {
                cursor->getNext()->setPrev(cursor);
                newNode->getNext()->setPrev(newNode);
            }
            size++;
        }
        else
        {
            cout << "*** LinkedList Size Out Of Range ***" << endl;
        }
    }

}

void DoublyLinkedList::remove(int pos)
{
    if (pos == 0)
    {
        head = head->getNext();
        if (head != NULL)
        {
            head->setPrev(NULL);
        }        
        size--;
    }
    else if (pos == size-1 && pos != 0)
    {
        cursor = head;
        for (int i = 0; i < pos-1; i++)
        {
            cursor = cursor->getNext();
        }
        cursor->setNext(NULL);
        size--;
    }
    else
    {
        if (pos < size)
        {
            cursor = head;
            Node* temp;
            for (int i = 0; i < pos-1; i++)
            {
                cursor = cursor->getNext();
            }
            temp = cursor->getNext()->getNext();
            cursor->setNext(temp);

            if (temp != NULL)
            {
                cursor->getNext()->setPrev(cursor);
                cursor->getNext()->getNext()->setPrev(cursor->getNext());
            }
            size--;
        }
        else
        {
            cout << "*** LinkedList Size Out Of Range ***" << endl;            
        }
    }
}

int DoublyLinkedList::getSize()
{
    return size;
}

