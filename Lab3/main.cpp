#include <bits/stdc++.h>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

void printList(LinkedList List){

    while (List.head != NULL)
    {
        cout << List.head->getValue() << endl;
        List.head = List.head->getNext();
    }
}

int main()
{
    LinkedList List;
    Node Node1;
    Node Node2;
    Node Node3;
    Node Node4;
    Node Node5;

    Node1.setValue(10);
    Node2.setValue(20);
    Node3.setValue(30);
    Node4.setValue(40);
    Node5.setValue(0);

    List.insert(&Node4,0);
    List.insert(&Node3,0);
    List.insert(&Node2,0);
    List.insert(&Node1,0);
    List.insert(&Node5,1);

    printList(List);
    cout << "-------------------------------------------" << endl;
    // cout << List.getSize() << endl;
    List.remove(2);
    printList(List);
    // Node1.getNext()->getNext()->getNext()->setValue(69);
    // cout << Node1.getNext()->getNext()->getNext()->getValue();
    // cout << "tail: " << List.tail->getValue() << endl;
}