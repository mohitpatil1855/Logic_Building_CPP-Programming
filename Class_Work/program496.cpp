//////////////////////////////////////////////////////////////////////
//                      Final code of Queue                         //
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#pragma pack(1)
class Queuenode
{
public:
    int data;
    Queuenode *next;

    Queuenode(int no)
    {
        this->data = no;
        this->next = NULL;
    }
};

class Queue
{
private:
    Queuenode *first;
    int iCount;

public:
    Queue();
    void Enqueue(int); // Insert Last
    int Dequeue();     // Delete First
    void Display();
    int Count();
};

Queue::Queue()
{
    cout << "Queue get's created successfully..!\n";

    this->first = NULL;
    this->iCount = 0;
}

void Queue::Enqueue(int no)
{
    int iCnt = 0;

    Queuenode *newn = NULL;
    Queuenode *temp = this->first;

    newn = new Queuenode(no);

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCount++;
}

int Queue::Dequeue()
{
    int Value = 0;
    Queuenode *temp = NULL;

    if (this->first == NULL)
    {
        cout << "Queue is Empty..!";
        return -1;
    }

    Value = this->first->data;

    temp = this->first;

    this->first = this->first->next;

    delete temp;

    this->iCount--;

    return Value;
}

void Queue::Display()
{
    Queuenode *temp = NULL;

    temp = this->first;

    if (this->first == NULL)
    {
        cout << "Queue is Empty..!";
        return;
    }

    while (temp != NULL)
    {
        cout << "| " << temp->data << " | -- ";
        temp = temp->next;
    }
    cout << "\n";
}

int Queue::Count()
{
    return this->iCount;
}

int main()
{
    Queue *qobj = new Queue();

    qobj->Enqueue(11);
    qobj->Enqueue(21);
    qobj->Enqueue(51);
    qobj->Enqueue(101);

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    cout << "Removed element is :" << qobj->Dequeue() << "\n";

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    cout << "Removed element is :" << qobj->Dequeue() << "\n";

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    qobj->Enqueue(121);

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    delete qobj;

    return 0;
}