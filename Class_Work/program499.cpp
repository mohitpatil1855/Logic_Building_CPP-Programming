//////////////////////////////////////////////////////////////////////
//            Final code of Queue using Generic Approach            //
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#pragma pack(1)
template <class T>
class Queuenode
{
public:
    T data;
    Queuenode<T> *next;

    Queuenode<T>(T no)
    {
        this->data = no;
        this->next = NULL;
    }
};

template <class T>
class Queue
{
private:
    Queuenode<T> *first;
    Queuenode<T> *last; //@
    int iCount;

public:
    Queue();
    void Enqueue(T);
    T Dequeue();
    void Display();
    int Count();
};

template <class T>
Queue<T>::Queue()
{
    cout << "Queue get's created successfully..!\n";

    this->first = NULL;
    this->last = NULL; //@
    this->iCount = 0;
}

template <class T>
void Queue<T>::Enqueue(T no)
{
    int iCnt = 0;

    Queuenode<T> *newn = NULL;

    newn = new Queuenode<T>(no);

    if (this->first == NULL && this->last == NULL) //@
    {
        this->first = newn;
        this->last = newn; //@
    }
    else
    {
        this->last->next = newn; //@
        this->last = newn;       //@
    }

    this->iCount++;
}

template <class T>
T Queue<T>::Dequeue()
{
    T Value = 0;
    Queuenode<T> *temp = NULL;

    if (this->first == NULL && this->last == NULL) //@
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

template <class T>
void Queue<T>::Display()
{
    Queuenode<T> *temp = NULL;

    temp = this->first;

    if (this->first == NULL && this->last == NULL) //@
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

template <class T>
int Queue<T>::Count()
{
    return this->iCount;
}

int main()
{
    Queue<double> *qobj = new Queue<double>();

    qobj->Enqueue(11.56478);
    qobj->Enqueue(21.56478);
    qobj->Enqueue(51.56478);
    qobj->Enqueue(101.56478);

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    cout << "Removed element is :" << qobj->Dequeue() << "\n";

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    cout << "Removed element is :" << qobj->Dequeue() << "\n";

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    qobj->Enqueue(121.56478);

    qobj->Display();

    cout << "Number of elements in Queue are :" << qobj->Count() << "\n\n";

    delete qobj;

    return 0;
}