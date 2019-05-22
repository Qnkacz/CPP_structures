#pragma once
#include <iostream>

using namespace std;
struct List
{
private:
    struct Node
    {
        int value;
        Node *next;
        Node(int _v, Node *n=nullptr)
        {
            this->value=_v;
            this->next=n;
        }

    };
    int counter=0;
     int value;
    Node *head=nullptr;
public:
    List()=default;
    ~List()=default;
    void push(int );
    void rem(int );
    int pop();
    void clear();
    void print() const;
};
