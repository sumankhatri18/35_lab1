#include<iostream>

class Node
{
    public:
        int info;
        Node *next;
};

class LinkedList
{
    private:
        Node* HEAD;
        Node* TAIL;
    public:
        LinkedList();
        ~LinkedList();

        void isEmpty();
};