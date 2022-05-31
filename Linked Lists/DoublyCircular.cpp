// Doubly Circular Linked List in C++

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
    
    public:
        DoublyCLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
};

DoublyCLL::DoublyCLL()
{
    Head = NULL;
    Tail = NULL;
}

void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn -> next = Head;
        newn -> prev = Tail;
        Head -> prev = newn;
        Head = newn;
    }

    Tail -> next = Head;

}

void DoublyCLL::InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn -> prev = Tail;
        newn -> next = Head;
        Tail -> next = newn;
        Head -> prev = newn;
        Tail = newn;
    }

    Tail -> next = Head;

}

void DoublyCLL::InsertAtPos(int iNo,int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) || (iPos > (iSize + 1)))
    {
        cout << "Invalid Position !!" << endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iSize + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        int iCnt = 0;
        PNODE newn = NULL;
        PNODE temp = Head;

        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        newn -> prev = temp;
        (temp -> next) -> prev = newn;
        temp -> next = newn;        
    }

}

void DoublyCLL::DeleteFirst()
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head -> next;
        delete Tail -> next;
        Tail -> next = Head;
        Head -> prev = Tail;
    }

}

void DoublyCLL::DeleteLast()
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        PNODE temp = Head;

        while(temp -> next != Tail)
        {
            temp = temp -> next;
        }

        delete Tail;
        Tail = temp;
        Tail -> next = Head;
        Head -> prev = Tail;
    }

}

void DoublyCLL::DeleteAtPos(int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) || (iPos > iSize))
    {
        cout << "Invalid Position !!" << endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize)
    {
        DeleteLast();
    }
    else
    {
        int iCnt = 0;
        PNODE temp = Head;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = (temp -> next) -> next;
        delete ((temp -> next) -> prev);
        (temp -> next) -> prev = temp;
    
    }

}

void DoublyCLL::Display()
{
    PNODE temp = Head;

    if((Head == NULL) && (Tail == NULL))
    {
        cout << "Linked List is Empty" << endl;
        return;
    }
    
    do
    {
        cout << "|" << temp -> data << "| -> ";
        temp = temp -> next;
    
    }while(temp != Head);
    
    cout << endl;

}

int DoublyCLL::Count()
{
    int iCnt = 0;
    PNODE temp = Head;

    if((Head == NULL) && (Tail == NULL))
    {
        cout << "Linked List is Empty" << endl;
        return 0;
    }

    do
    {
        iCnt++;
        temp = temp -> next;
    
    }while(temp != Head);
    
    return iCnt;

}

int main()
{
    int iRet = 0;
    DoublyCLL obj;

    obj.InsertFirst(40);
    obj.InsertFirst(30);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;
    cout << endl;

    obj.InsertLast(70);
    obj.InsertLast(80);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;
    cout << endl;

    obj.InsertFirst(20);
    obj.InsertFirst(10);
    obj.InsertLast(90);
    obj.InsertLast(100);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;
    cout << endl;

    obj.InsertAtPos(50,5);
    obj.InsertAtPos(60,6);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;
    cout << endl;

    obj.DeleteAtPos(6);
    obj.DeleteAtPos(5);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;
    cout << endl;

    obj.DeleteFirst();
    obj.DeleteFirst();

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;
    cout << endl;

    obj.DeleteLast();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;
    cout << endl;


    return 0;
}