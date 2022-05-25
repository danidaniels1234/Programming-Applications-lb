// Singly Linear Linked List in C++

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLLL
{
    private:
        PNODE Head;

    public:
        SinglyLLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
};

SinglyLLL::SinglyLLL()
{
    Head = NULL;
}

void SinglyLLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn -> next = Head;
        Head = newn;
    }
}

void SinglyLLL::InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        PNODE temp = Head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;

    }
}

void SinglyLLL::InsertAtPos(int iNo,int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) && (iPos > (iSize + 1)))
    {
        cout << "Invalid Posiiton" << endl;
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
        PNODE temp = Head;
        PNODE newn = Head;
        newn = new NODE;

        newn -> data = iNo;
        newn -> next = NULL;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;

    }


}

void SinglyLLL::DeleteFirst()
{
    if(Head == NULL)
    {
        return;
    }
    else if(Head->next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        PNODE temp = Head;

        Head = Head->next;
        delete temp;
    }
}

void SinglyLLL::DeleteLast()
{
    if(Head == NULL)
    {
        return;
    }
    else if(Head->next == NULL)
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
void SinglyLLL::DeleteAtPos(int iPos)
{
    int iSize = 0;
    iSize = Count();

    if((iPos < 1) && (iPos > iSize))
    {
        cout << "Invalid Posiiton" << endl;
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

        PNODE tempX = temp -> next;

        temp -> next = tempX -> next;
        delete tempX;       
        
    }
}

void SinglyLLL::Display()
{
    PNODE temp = Head;

    while(temp != NULL)
    {
        cout << "|" << temp -> data << "| -> ";
        temp = temp -> next;
    }

    cout << "NULL" << endl;

}

int SinglyLLL::Count()
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
    SinglyLLL obj;

    obj.InsertFirst(500);
    obj.InsertFirst(400);
    obj.InsertFirst(300);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.InsertLast(1000);
    obj.InsertLast(2000);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.InsertAtPos(111,3);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.DeleteAtPos(3);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.InsertFirst(200);
    obj.InsertFirst(100);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.DeleteFirst();
    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.DeleteLast();
    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    return 0;
}