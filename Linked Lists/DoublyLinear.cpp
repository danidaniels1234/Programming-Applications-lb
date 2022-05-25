// Doubly Linear linked list in c++

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

class DoublyLLL
{
    private:
        PNODE Head;
    
    public:
        DoublyLLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
};

DoublyLLL::DoublyLLL()
{
    Head = NULL;
}

void DoublyLLL::InsertFirst(int iNo)
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

void DoublyLLL::InsertLast(int iNo)
{
    PNODE temp = NULL;
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
        temp = Head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;
        
    }

}

void DoublyLLL::DeleteFirst()
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

void DoublyLLL::DeleteLast()
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

void DoublyLLL::InsertAtPos(int iNo,int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) || (iPos > (iSize + 1)))
    {
        cout << "Invalid Position" << endl;
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

        temp -> next = newn;
        newn -> next -> prev = newn;

    }

}

void DoublyLLL::DeleteAtPos(int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) || (iPos > iSize))
    {
        cout << "Invalid Position" << endl;
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
        
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

    }

}

void DoublyLLL::Display()
{
    PNODE temp = Head;

    cout << "\nElements in Linked List: " << endl;

    while(temp != NULL)
    {
        cout << "|" << temp -> data << "| -> ";
        temp = temp -> next;
    }
    
    cout << "NULL" << endl;

}

int DoublyLLL::Count()
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
    int Ret = 0;
    DoublyLLL obj;

    obj.InsertFirst(5);
    obj.InsertFirst(4);
    obj.InsertFirst(3);
    
    obj.Display();
    Ret = obj.Count();
    cout << "Number of Nodes are : " << Ret << endl;

    obj.InsertLast(8);
    obj.InsertLast(9);
    obj.InsertLast(10);

    obj.Display();
    Ret = obj.Count();
    cout << "Number of Nodes are : " << Ret << endl;

    obj.InsertAtPos(6,4);
    obj.InsertAtPos(7,5);

    obj.Display();
    Ret = obj.Count();
    cout << "Number of Nodes are : " << Ret << endl;

    obj.DeleteAtPos(5);
    obj.DeleteAtPos(4);

    obj.Display();
    Ret = obj.Count();
    cout << "Number of Nodes are : " << Ret << endl;

    obj.InsertFirst(2);
    obj.InsertFirst(1);

    obj.Display();
    Ret = obj.Count();
    cout << "Number of Nodes are : " << Ret << endl;

    obj.DeleteFirst();
    obj.DeleteFirst();

    obj.Display();
    Ret = obj.Count();
    cout << "Number of Nodes are : " << Ret << endl;

    obj.DeleteLast();
    obj.DeleteLast();

    obj.Display();
    Ret = obj.Count();
    cout << "Number of Nodes are : " << Ret << endl;

    return 0;
}