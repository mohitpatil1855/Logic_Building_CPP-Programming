#include <iostream>
using namespace std;

#pragma pack(1)

class node // using class as Struct
{
public:
    int data;
    node *next;
    node *prev;

    node(int no)
    {
        this->data = no;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLLL // Generic DLLL (only Declaration)
{
public:
    node *first;
    int iCount;

    DoublyLLL();

    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int, int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

    void Display();
    int Count();
};

DoublyLLL ::DoublyLLL()
{
    cout << "Linked List get's Created..!\n";

    this->first = NULL;
    this->iCount = 0;
}

void DoublyLLL ::InsertFirst(int no)
{
    node *newn = NULL;

    newn = new node(no);

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
void DoublyLLL ::InsertLast(int no)
{
    int iCnt = 0;

    node *temp = NULL;
    node *newn = NULL;

    newn = new node(no);

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
void DoublyLLL ::InsertAtPos(int no, int pos)
{
}

void DoublyLLL ::DeleteFirst()
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
void DoublyLLL ::DeleteLast()
{
    node *temp = NULL;

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
void DoublyLLL ::DeleteAtPos(int pos)
{
}

void DoublyLLL ::Display()
{
    node *temp = NULL;
    temp = this->first;

    cout << "\n NULL <==>";
    while (temp != NULL)
    {
        cout << " | " << temp->data << " |<==> ";

        temp = temp->next;
    }
    cout << "NULL \n";
}
int DoublyLLL ::Count()
{
    return this->iCount;
}

int main()
{
    DoublyLLL *dobj = new DoublyLLL(); // Dynamic Memory Allocation

    dobj->InsertFirst(51);
    dobj->InsertFirst(21);
    dobj->InsertFirst(11);

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->InsertLast(101);
    dobj->InsertLast(111);
    dobj->InsertLast(121);

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->DeleteFirst();

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    dobj->DeleteLast();

    dobj->Display();

    cout << "Number of Elements are : " << dobj->iCount << "\n";

    delete dobj;

    return 0;
}