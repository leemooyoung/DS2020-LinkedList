#ifndef _HOKOKOK_LIST_
#define _HOKOKOK_LIST_ 1

class LinkedList;

class Node
{
private:
    int data;
    Node * next;
public:
    friend LinkedList;
};

class LinkedList
{
private:
    Node * head;
public:
    LinkedList();
    ~LinkedList();
    void Append(int data);
    void Prepend(int data);
    int Length();
    void Print();
};

#endif