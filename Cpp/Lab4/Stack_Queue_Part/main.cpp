#include <bits/stdc++.h>
#include "Node.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
using namespace std;

// void printList(LinkedList List){

//     while (List.head != NULL)
//     {
//         cout << List.head->getValue() << endl;
//         List.head = List.head->getNext();
//     }
// }

// void printDList(DoublyLinkedList List){

//     cout << "---Print Function---" << endl;
//     Node* last;
//     while (List.head != NULL)
//     {
//         cout << List.head->getValue() << endl;
//         last = List.head;
//         List.head = List.head->getNext();
//     }
    
//     cout << "---Reverse---" << endl;

//     while (last != NULL)
//     {
//         cout << last->getValue() << endl;
//         last = last->getPrev();
//     }

//     cout << "---End---" << endl;

// }

void TorQueue(int qq[], int _size)
{
    Queue row_1, row_2;

    for (int i = 0; i < _size; i++)
    {
        if (qq[i] % 2 == 0)
        {
            row_1.intQueue(qq[i]);
        }
        else if (qq[i] % 2 != 0)
        {
            row_2.intQueue(qq[i]);
        }

        if (row_1.getSize() > 0 && row_2.getSize() > 0)
        {
            if (row_1.intPeek() > row_2.intPeek())
            {
                row_1.intQueue(row_1.intDeQueue());
            }
            else if (row_2.intPeek() > row_1.intPeek())
            {
                row_2.intQueue(row_2.intDeQueue());
            }
        }

    }
    cout << "Row_1:" << endl;
    row_1.printHList();
    cout << "Row_2:" << endl;
    row_2.printHList();
}
int main()
{
    LinkedList List;
    Node Node1;
    Node Node2;
    Node Node3;
    Node Node4;
    Node Node5;
    Node Node6;
    Node Node7;
    Node Node8;
    Node Node9;
    Node Node0;


    Node1.setValue(1);
    Node2.setValue(2);
    Node3.setValue(3);
    Node4.setValue(4);
    Node5.setValue(5);
    Node6.setValue(6);
    Node7.setValue(7);
    Node8.setValue(8);
    Node9.setValue(9);
    Node0.setValue(0);


    // Node7.setPrev(&Node6);
    // Node7.setNext(&Node8);
    

    // cout << Node7.getPrev()->getValue() << "  " << Node7.getNext()->getValue();
    // List.insert(&Node4,0);
    // List.insert(&Node3,0);
    // List.insert(&Node2,0);
    // List.insert(&Node1,0);
    // List.insert(&Node5,1);

    // printList(List);
    // cout << "-------------------------------------------" << endl;
    // cout << List.getSize() << endl;
    // List.remove(2);
    // printList(List);
    // Node1.getNext()->getNext()->getNext()->setValue(69);
    // cout << Node1.getNext()->getNext()->getNext()->getValue();
    // cout << "tail: " << List.tail->getValue() << endl;

    // DList.insert(&Node7,0);
    // DList.insert(&Node6,0);    
    // DList.insert(&Node5,0);
    // DList.insert(&Node4,0);
    // DList.insert(&Node3,0);
    // DList.insert(&Node2,3);

    // cout << DList.getSize() << endl;
    // DList.insert(&Node1,0);
    // DList.insert(&Node8,0);
    // cout << Node6.getPrev()->getValue() << endl;
    // printDList(DList);
    // cout << "-------------------------------------------" << endl;
    // DList.remove(2);
    // DList.remove(4);
    // DList.remove(0);
    // printDList(DList);

    Stack stack;

    stack.Push(&Node1);
    stack.Push(&Node2);
    stack.Push(&Node3);
    stack.Push(&Node4);
    stack.Push(&Node5);

    cout << "---------------Stack---------------" << endl;
    cout << "Size: " << stack.getSize() << endl;
    cout << "Peek: " << stack.Peek()->getValue() << endl;

    cout << "Pop Value: " << stack.Pop()->getValue() << endl;

    cout << "Size After Pop: " << stack.getSize() << endl;
    cout << "Peek After Pop: " << stack.Peek()->getValue() << endl;

    // stack.printList();

    Queue queue;

    queue.enQueue(&Node1);
    queue.enQueue(&Node2);
    queue.enQueue(&Node3);
    queue.enQueue(&Node4);
    queue.enQueue(&Node5);

    cout << "---------------Queue---------------" << endl;
    cout << "Size: " << queue.getSize() << endl;
    cout << "Peek: " << queue.Peek()->getValue() << endl;

    cout << "1st Dequeue Value: " << queue.deQueue()->getValue() << endl;
    cout << "2nd Dequeue Value: " << queue.deQueue()->getValue() << endl;
    cout << "3rd Dequeue Value: " << queue.deQueue()->getValue() << endl;

    cout << "Size After Dequeue: " << queue.getSize() << endl;
    cout << "Peek After Dequeue: " << queue.Peek()->getValue() << endl;

    cout << "---------------Card---------------" << endl;

    Stack card;
    card.cardPush(&Node1);
    card.cardPush(&Node2);
    card.cardPush(&Node3);
    card.cardPush(&Node0);
    card.cardPush(&Node4);
    card.cardPush(&Node5);

    card.printList();

    cout << "---------------TorQueue---------------" << endl;

    int qq_1[7] = {5,6,8,9,2,7,1};    
    int qq_2[7] = {1,2,3,4,5,6,7}; //6 2 4 || 1 3 5 7

    TorQueue(qq_1,7);
    TorQueue(qq_2,7);

    // Queue intq;

    // intq.intQueue(1);
    // intq.intQueue(2);
    // intq.intQueue(3);
    // intq.intQueue(4);
    // intq.intQueue(5);

    // intq.printList();

    return 0;
}
