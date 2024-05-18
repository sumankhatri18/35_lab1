#pragma once
#include<iostream>

class Node
{
    public:
        int info;
        Node *next;

        Node(int data) : info(data),next(nullptr) {}

};

class LinkedList
{
    private:
        Node* HEAD;
        Node* TAIL;
    public:
        LinkedList();
        ~LinkedList(){}

        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add(int data,Node* predecessor);
        void removeFromHead();
        void remove(int data);
        bool retrieve(int data,Node* &outputNodePointer);
        bool search(int data);
        void traverse();
};