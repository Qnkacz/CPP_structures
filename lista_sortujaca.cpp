#include "lista_sortujaca.h"
void List::push(int _v)
{
Node *prev=head;
Node *succ=nullptr;
    while(succ!=nullptr && succ->value<_v)
    {
        prev=succ;
        succ=succ->next;
    }
Node *creator =new Node(_v,succ);
if(prev!=nullptr)
{
    prev->next=creator;
}
else
{
    head=creator;
}
counter++;
}

int List::pop()
{
//generic
}

void List::clear()
{
//generic
}

void List::print() const
{
//generic
}
void List::rem(int _v)
{
Node *prev=head;;
Node *succ=nullptr;
while(succ!=nullptr && succ->value<_v)
{
    prev=succ;
    succ=succ->next;
}
if(succ!=nullptr || succ->value!=_v)
{
    throw logic_error("no nie ma");
}
while(succ!=nullptr && succ->value==_v)
{
    Node *killer=succ;
succ=succ->next;
if(prev!=nullptr)
{
    prev->next=succ;
}
else
{
    head=succ;
}
delete killer;
counter++;
}

}
