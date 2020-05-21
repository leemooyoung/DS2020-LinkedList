#include <iostream>
#include "list.h"

LinkedList::LinkedList()
{
    head = new Node();
    head -> data = 0;
    head -> next = nullptr;
}

LinkedList::~LinkedList()
{
    Node * cur = head;
    while(cur != nullptr)
    {
        Node * tmp = cur -> next;
        delete cur;
        cur = tmp;
    }
}

void LinkedList::Append(int data)
{
    Node * new_node = new Node();
    new_node -> data = data;
    new_node -> next = nullptr;

    Node * cur = head;
    while(cur -> next != nullptr)
    {
        cur = cur -> next;
    }

    cur -> next = new_node;
}

int LinkedList::Length()
{
    int l = 0;
    Node * cur = head;
    while(cur -> next != nullptr)
    {
        l++;
        cur = cur -> next;
    }
    return l;
}

void LinkedList::Print()
{
    Node * cur = head;
    while(cur -> next != nullptr)
    {
        std::cout << cur -> next -> data << " ";
        cur = cur -> next;
    }
    std::cout << std::endl;
}