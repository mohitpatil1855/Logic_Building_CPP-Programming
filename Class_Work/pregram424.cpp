#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node *PPNODE; // No need because no use of call by address

class SinglyLL
{
public:
    PNODE first; // Characteristics
    int iCount;

    SinglyLL() // Constructor
    {
        cout << "object of SinglyLL gets created..\n";
        first = NULL;
        iCount = 0;
    }

    void InsertFirst(int no) //updated
    {
        PNODE newn = NULL;

        newn = new node;

        newn->data = no;
        newn->next = NULL;

        newn->next = first; // removing if and else conditions
        first = newn;
    }

    void InsertLast(int no)
    {
        PNODE temp = NULL;
        PNODE newn = NULL;

        newn = new node;

        newn->data = no;
        newn->next = NULL;

        if(first==NULL || last == NULL)
        {}fsdfsdf
    }

    void InsertAtPos(int no, int pos)
    {
    }

    void DeleteFirst()
    {
    }

    void DeleteLast()
    {
    }

    void DeleteAtPos(int pos)
    {
    }

    void Display()
    {
    }

    int Count()
    {
        return iCount; // iCount - counts the nodes everytime inserted or deleted (iCount++ or iCount--)
    }
};

int main()
{
    int iRet = 0;

    SinglyLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    iRet = obj.Count();
    cout << "Number of nodes are : " << iRet << "\n";

    return 0;
}