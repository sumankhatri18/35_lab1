#include<iostream>
#include"LinkedList.h"

int main()
{
    LinkedList list;

    list.addToHead(8);
    list.addToHead(10);

    std::cout << "\n";
    list.traverse();

    list.addToTail(12);

    std::cout << "\n";
    list.traverse();

    list.removeFromHead();

    std::cout << "\n";
    list.traverse();

    list.addToHead(20);
    list.addToTail(30);

    std::cout << "\n";
    list.traverse();

    Node *nodePointer = nullptr;
    if(list.retrieve(12,nodePointer))
        std::cout << "\t" << nodePointer;

    list.add(34,nodePointer);

    std::cout << "\n";
    list.traverse();

    if(list.search(88))
        std::cout << "Data found in list";
}