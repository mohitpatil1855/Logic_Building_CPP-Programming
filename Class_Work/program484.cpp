#include <iostream>
using namespace std;

#pragma pack(1)
template <class T>
class node // using class as Struct
{
public:
    T data;
    node *next;
    node *prev;

    node(T no)
    {
        this->data = no;
        this->next = NULL;
        this->prev = NULL;
    }
};

template <class T>
class DoublyLLL // Generic DLLL (only Declaration)
{
public:
    node<T> *first;
    int iCount;

    DoublyLLL();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    void Display();
    int Count();
};

template <class T>
DoublyLLL<T>::DoublyLLL()
{
    cout << "Linked List get's Created..!\n";

    this->first = NULL;
    this->iCount = 0;
}

template <class T>
void DoublyLLL<T>::InsertFirst(T no)
{
    node<T> *newn = NULL;

    newn = new node<T>(no);

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->iCount++;
}

template <class T>
void DoublyLLL<T>::InsertLast(T no)
{
    int iCnt = 0;

    node<T> *temp = NULL;
    node<T> *newn = NULL;

    newn = new node<T>(no);

    if (this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
        while (temp->next != NULL) // use while loop
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    this->iCount++;
}

template <class T>
void DoublyLLL<T>::InsertAtPos(T no, int pos)
{
    node<T> *temp = NULL;
    node<T> *newn = NULL;
    int iCnt = 0;

    if (pos < 1 || pos > this->iCount + 1)
    {
        cout << "Invalid Position..!";
        return;
    }

    if (pos == 1)
    {
        this->InsertFirst(no);
    }

    else if (pos == iCount + 1)
    {
        this->InsertLast(no);
    }

    else
    {
        newn = new node<T>(no);
        temp = this->first;

        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        this->iCount++;
    }
}

template <class T>
void DoublyLLL<T>::DeleteFirst()
{
    if (this->first == NULL) // LL is Empty
    {
        cout << "Linked List is Empty..!";
        return;
    }
    else if (this->first->next == NULL) // LL Contains 1 Node
    {
        delete this->first;
        this->first = NULL;
    }
    else // LL contains More than 1 node
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }

    this->iCount--;
}

template <class T>
void DoublyLLL<T>::DeleteLast()
{
    node<T> *temp = NULL;

    if (this->first == NULL) // LL is Empty
    {
        cout << "Linked List is Empty..!";
        return;
    }
    else if (this->first->next == NULL) // LL Contains 1 Node
    {
        delete this->first;
        this->first = NULL;
    }
    else // LL contains More than 1 node
    {
        temp = this->first;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

template <class T>
void DoublyLLL<T>::DeleteAtPos(int pos)
{
    node<T> *temp = NULL;
    int iCnt = 0;

    if (pos < 1 || pos > this->iCount)
    {
        cout << "Invalid Position..!";
        return;
    }

    if (pos == 1)
    {
        this->DeleteFirst();
    }

    else if (pos == iCount)
    {
        this->DeleteLast();
    }

    else
    {
        temp = this->first;

        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        this->iCount--;
    }
}

template <class T>
void DoublyLLL<T>::Display()
{
    node<T> *temp = NULL;
    temp = this->first;

    cout << "\n NULL <==>";
    while (temp != NULL)
    {
        cout << " | " << temp->data << " |<==> ";

        temp = temp->next;
    }
    cout << "NULL \n";
}

template <class T>
int DoublyLLL<T>::Count()
{
    return this->iCount;
}

int main()
{
    DoublyLLL<char> *dobj = new DoublyLLL<char>(); // Dynamic Memory Allocation

    dobj->InsertFirst('A');
    dobj->InsertFirst('B');
    dobj->InsertFirst('C');

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->InsertLast('X');
    dobj->InsertLast('Y');
    dobj->InsertLast('Z');

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->DeleteFirst();

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->DeleteLast();

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->InsertAtPos('$', 4);

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->DeleteAtPos(4);

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    delete dobj;

    return 0;
}