#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

int main()
{
    Node Node1;
    Node Node2;
    Node Node3;
    Node Node4;

    Node1.setValue(10);
    Node2.setValue(20);
    Node3.setValue(30);
    Node4.setValue(40);

    Node1.setNext(&Node2);
    Node2.setNext(&Node3);
    Node3.setNext(&Node4);
    Node4.setNext(NULL);


    
    // Node1.getNext()->getNext()->getNext()->setValue(69);
    // cout << Node1.getNext()->getNext()->getNext()->getValue();
}