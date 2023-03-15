#include <bits/stdc++.h>
#include "Node.h"
#include "LinkedList.h"
#include "DoublyLinkedList.h"
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
    DoublyLinkedList DList;
    LinkedList List;
    Node Node2;
    Node Node1;
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

    // Node1.setNext(&Node2);

    // Node7.setPrev(&Node6);
    // Node7.setNext(&Node8);
    
    // cout << Node1.getNext()->getValue() << endl;

    // cout << Node7.getPrev()->getValue() << "  " << Node7.getNext()->getValue();
    // List.insert(&Node4,0);
    // List.insert(&Node3,0);
    // List.insert(&Node2,0);
    // List.insert(&Node1,0);
    // List.insert(&Node5,1);

    // List.printList();

    // printList(List);
    // cout << "-------------------------------------------" << endl;
    // cout << List.getSize() << endl;

    // List.remove(-10);
    // cout << "-------------" << endl;
    // List.printList();

    // Node1.getNext()->getNext()->getNext()->setValue(69);
    // cout << Node1.getNext()->getNext()->getNext()->getValue();
    // cout << "tail: " << List.tail->getValue() << endl;

    DList.insert(&Node7,0);
    DList.insert(&Node6,0);    
    DList.insert(&Node5,0);
    DList.insert(&Node4,0);
    DList.insert(&Node3,0);
    DList.insert(&Node2,3);

    DList.printDList();
    // // cout << DList.getSize() << endl;
    // // DList.insert(&Node1,0);
    // // DList.insert(&Node8,0);
    // // cout << Node6.getPrev()->getValue() << endl;
    // printDList(DList);
    // cout << "-------------------------------------------" << endl;
    // DList.remove(2);
    // DList.remove(4);
    // DList.remove(0);
    // printDList(DList);


}