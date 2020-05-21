#ifndef _HOKOKOK_LIST_
#define _HOKOKOK_LIST_ 1

class LinkedList;

class Node
{
private:
    int data;
    Node * next;
    Node * prev;
    friend LinkedList;
};

class LinkedList
{
private:
    Node * head;    //head, tail은 dummy node
    Node * tail;
public:
    LinkedList();
    ~LinkedList();
    void Append(int data);
    void Prepend(int data);
    int Length();
    void Print();
    void PrintReverse();
};

#endif