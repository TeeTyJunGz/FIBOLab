#include <bits/stdc++.h>
#include "Node.h"
using namespace std;

Node::Node()
{
    value = 0;
    next = NULL;
}

Node::Node(int newValue, Node* newNode)
{
    value = newValue;
    next = newNode;    
}

int Node::getValue()
{
    return value;
}

void Node::setValue(int newValue)
{
    value = newValue;
}

Node* Node::getNext()
{
    return next;
}

void Node::setNext(Node* newNode)
{
    next = newNode;
}