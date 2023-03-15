#ifndef NODE_H
#define NODE_H
class Node 
{
    private:
        int value;
        Node* prev;
        Node* next;
    public:
        Node();
        Node(int newValue, Node* newNext);
        void print();
        int getValue();
        void setValue(int newValue);
        Node* getNext();
        void setNext(Node* newNext);
        Node* getPrev();
        void setPrev(Node* newPrev);
};
#endif