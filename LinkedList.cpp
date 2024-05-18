#include<iostream>
#include"LinkedList.h"

LinkedList::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
}

bool LinkedList::isEmpty()
{
    if(HEAD == NULL)
        return true;
    return false;
}

void LinkedList::addToHead(int data)
{
    Node *newNode = new Node(data);
    newNode->next = HEAD;
    HEAD = newNode;
    if(TAIL == NULL) 
        TAIL = HEAD;
}

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node(data);
    if(TAIL == NULL)
        HEAD = TAIL = newNode;
    TAIL->next = newNode;
    TAIL = newNode;
}

void LinkedList::add(int data,Node* predecessor)
{
    Node *newNode = new Node(data);
    newNode->next = predecessor->next;
    predecessor->next = newNode;
}

void LinkedList::removeFromHead()
{   
    if(isEmpty() != true)
    {
        Node *NodeToDelete = HEAD;
        HEAD = NodeToDelete->next;
        delete NodeToDelete;
        if(HEAD == NULL)
            TAIL = NULL;
    }
}

void LinkedList::remove(int data)
{   
    Node *temp,*prev;
    
    if(isEmpty() != true)
    {
        if(HEAD->info == data)
        {
            removeFromHead();
            return;
        }
        else
        {
            temp = HEAD->next;
            prev = HEAD;
        }
        while (temp != NULL)
        {
            if(temp->info == data)
                break;
            else
            {
                prev = prev->next;
                temp = temp->next;
            }
        }
        if(temp != NULL)
        {
            prev->next = temp->next;
            delete temp;
            if(prev->next == NULL)
                TAIL = prev;
        }
    }
}

bool LinkedList::retrieve(int data,Node* &outputNodePointer)
{
    Node *p = HEAD;
    while (p != NULL and p->info != data)
        p = p->next;
    if(p == NULL)
        return false;
    else
    {
        outputNodePointer = p;
        return true;
    }
}

bool LinkedList::search(int data)
{
    Node *temp = HEAD;
    while (temp != NULL)
    {
        if(temp -> info == data)
            return true;
        temp = temp->next;
    }
    return false; 
}

void LinkedList::traverse()
{
    Node *temp = HEAD;
    while (temp != NULL)
    {
        std::cout << temp->info << " ";
        temp = temp->next;
    } 
}