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
    int pop();      // Delete First
    int peep();
    void Display();
    int Count();
};

Stack::Stack()
{
    cout << "Stack get's created successfully..!\n";

    this->first = NULL;
    this->iCount = 0;
}

void Stack::push(int no)
{
    Stacknode *newn = NULL;

    newn = new Stacknode(no);

    newn->next = this->first;
    this->first = newn;

    this->iCount++;
}

int Stack::pop()
{
    int Value = 0;
    Stacknode *temp = NULL;

    if (this->first == NULL)
    {
        cout << "Stack is Empty..!";
        return -1;
    }

    Value = this->first->data;

    temp = this->first;

    this->first = this->first->next;

    delete temp;

    this->iCount--;

    return Value;
}
int Stack::peep()
{
    int Value = 0;

    if (this->first == NULL)
    {
        cout << "Stack is Empty..!";
        return -1;
    }

    Value = this->first->data;

    return Value;
}
void Stack::Display()
{
    Stacknode *temp = NULL;

    temp = this->first;

    if (this->first == NULL)
    {
        cout << "Stack is Empty..!";
        return;
    }

    while (temp != NULL)
    {
        cout << "|\t" << temp->data << "\t|\n";
        temp = temp->next;
    }
}
int Stack::Count()
{
    return this->iCount;
}

int main()
{
    Stack *sobj = new Stack();

    sobj->push(11);
    sobj->push(21);
    sobj->push(51);
    sobj->push(101);

    sobj->Display();

    cout << "Number of elements in Stack are :" << sobj->Count() << "\n\n";

    cout << "Return Value of Peep is : " << sobj->peep() << "\n";

    sobj->Display();

    cout << "Number of elements in Stack are :" << sobj->Count() << "\n\n";

    cout << "Poped element is :" << sobj->pop() << "\n";

    sobj->Display();

    cout << "Number of elements in Stack are :" << sobj->Count() << "\n\n";

    cout << "Poped element is :" << sobj->pop() << "\n";

    sobj->Display();

    cout << "Number of elements in Stack are :" << sobj->Count() << "\n\n";

    sobj->push(121);

    sobj->Display();

    cout << "Number of elements in Stack are :" << sobj->Count() << "\n\n";

    delete sobj;

    return 0;
}