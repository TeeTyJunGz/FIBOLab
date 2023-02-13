#include <bits/stdc++.h>
#include "Node.h"

Node::Node(){
    value = 0;
    next = NULL;
}

Node::Node(int newValue, Node* newNext){
    value = newValue;
    next = newNext;
}

void Node::print(){
    std::cout << value;
}

int Node::getValue(){
    return value;
}

void Node::setValue(int newValue){
    value = newValue;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* newNext){
    next = newNext;
}

Node* Node::getPrev(){
    return prev;
}

void Node::setPrev(Node* newPrev){
    prev = newPrev;
}