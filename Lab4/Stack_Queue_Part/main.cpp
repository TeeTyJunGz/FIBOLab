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


    Node1.setValue(10);
    Node2.setValue(20);
    Node3.setValue(30);
    Node4.setValue(40);
    Node5.setValue(50);
    Node6.setValue(60);
    Node7.setValue(70);
    Node8.setValue(0);


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
    cout << "Size:" << stack.getSize() << endl;
    cout << "Peek: " << stack.Peek()->getValue() << endl;

    cout << "Pop Value: " << stack.Pop()->getValue() << endl;

    cout << "Size After Pop:" << stack.getSize() << endl;
    cout << "Peek After Pop: " << stack.Peek()->getValue() << endl;

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

    return 0;
}