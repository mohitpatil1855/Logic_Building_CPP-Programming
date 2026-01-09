#include <iostream>
using namespace std;

#pragma pack(1)
class Stacknode
{
public:
    int data;
    Stacknode *next;

    Stacknode(int no)
    {
        this->data = no;
        this->next = NULL;
    }
};

class Stack
{
private:
    Stacknode *first;
    int iCount;

public:
    Stack();
    void push(int); // Insert First
    void pop();     // Delete First
    void peep();
    void Display();
    int Count();
};

Stack::Stack()
{
}

void Stack::push(int no)
{
    if (this->iCount == 0)
    {
    }
}
void Stack::pop()
{
}
void Stack::peep()
{
}
void Stack::Display()
{
}
int Stack::Count()
{
    return this->iCount;
}

int main()
{
    Stack *sobj = new Stack();

    delete sobj;

    return 0;
}