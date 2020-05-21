#include <iostream>
#include "list.h"

LinkedList::LinkedList()
{
    head = new Node();
    tail = new Node();

    head -> data = 0;
    tail -> data = 0;

    head -> next = tail;
    head -> prev = nullptr;

    tail -> next = nullptr;
    tail -> prev = head;
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

    // tail의 이전 원소와 new_node를 연결
    tail -> prev -> next = new_node;
    new_node -> prev = tail -> prev;

    // new_node와 tail을 연결
    new_node -> next = tail;
    tail -> prev = new_node;
}

void LinkedList::Prepend(int data)
{
    Node * new_node = new Node();
    new_node -> data = data;
    
    // head의 다음 원소와 new_node를 연결
    head -> next -> prev = new_node;
    new_node -> next = head -> next;

    // new_node와 head를 연결
    head -> next = new_node;
    new_node -> prev = head;
}

int LinkedList::Length()
{
    int l = 0;
    Node * cur = head;
    while(cur -> next != tail)
    {
        cur = cur -> next;
        l++;
    }
    return l;
}

void LinkedList::Print()
{
    Node * cur = head;
    while(cur -> next != tail)
    {
        cur = cur -> next;
        std::cout << cur -> data << " ";
    }
    std::cout << std::endl;
}

void LinkedList::PrintReverse()
{
    Node * cur = tail;
    while(cur -> prev != head)
    {
        cur = cur -> prev;
        std::cout << cur -> data << " ";
    }
    std::cout << std::endl;
}