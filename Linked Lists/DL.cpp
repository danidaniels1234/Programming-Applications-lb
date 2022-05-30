// PRACTICING Doubly Linear Linked List

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

class DLLL
{
    private:
        PNODE Head;
    
    public:
        DLLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
};

DLLL::DLLL()
{
    Head = NULL;
}

void DLLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn -> next = Head;
        Head -> prev = newn;
        Head = newn;
    }

}

void DLLL::InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        temp = Head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;

    }
}

void DLLL::InsertAtPos(int iNo,int iPos)
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
    else if(iPos == (iSize + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        int iCnt = 0;
        PNODE temp = NULL;
        PNODE newn = NULL;

        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = Head;

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

void DLLL::DeleteFirst()
{
    if(Head == NULL)
    {
        return;
    }
    else if(Head -> next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        Head = Head -> next;
        delete (Head -> prev);
        Head -> prev = NULL;
    }

}

void DLLL::DeleteLast()
{
    if(Head == NULL)
    {
        return;
    }
    else if(Head -> next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        PNODE temp = Head;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        delete temp -> next;
        temp -> next = NULL;

    }

}

void DLLL::DeleteAtPos(int iPos)
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
        PNODE temp = NULL;
        temp = Head;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;            
        }

        temp -> next = (temp -> next) -> next;
        delete ((temp -> next) -> prev);
        (temp -> next) -> prev = temp;

    }

}

void DLLL::Display()
{
    PNODE temp = Head;
    cout << endl;

    while(temp != NULL)
    {
        cout << "|" << temp->data << "| -> ";
        temp = temp -> next;
    }

    cout << "NULL" << endl;

}

int DLLL::Count()
{
    int iCnt = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }

    return iCnt;

}

int main()
{
    int iRet = 0;

    DLLL obj;

    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;

    obj.InsertLast(70);
    obj.InsertLast(80);
    obj.InsertLast(90);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;

    obj.InsertFirst(10);
    obj.InsertLast(100);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;

    obj.InsertAtPos(50,5);
    obj.InsertAtPos(60,6);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;

    obj.DeleteAtPos(6);
    obj.DeleteAtPos(5);
    
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes are : " << iRet << endl;

    return 0;
}