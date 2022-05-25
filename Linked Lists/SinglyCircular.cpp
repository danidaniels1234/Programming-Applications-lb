// Singly Circular Linked List in C++

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    private:            // Characteristics
        PNODE Head;
        PNODE Tail;

    public:             // Behaviours
        SinglyCLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        void Display();
        int Count();
};

SinglyCLL::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
}

void SinglyCLL::InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    
    if((Head == NULL) && (Tail == NULL))    // If LL is Empty
    {
        Head = newn;
        Tail = newn;
    }
    else                    // If LL Contains atleast 1 node
    {
        newn -> next = Head;
        Head = newn;
    }

    Tail -> next = Head;

}

void SinglyCLL::InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn -> data = iNo;
    newn -> next = NULL;
    
    if((Head == NULL) && (Tail == NULL))    // If LL is Empty
    {
        Head = newn;
        Tail = newn;
    }
    else                    // If LL Contains atleast 1 node
    {
        Tail -> next = newn;
        Tail = newn;
    }

    Tail -> next = Head;

}

void SinglyCLL::InsertAtPos(int iNo,int iPos)
{
    int iSize = Count();

    if((iPos < 1) || (iPos > (iSize + 1)))
    {
        cout << "Invalid Position" << endl;
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
        PNODE newn = NULL;

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

void SinglyCLL::DeleteFirst()
{
    if(Head == NULL && Tail == NULL)
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
    }

}

void SinglyCLL::DeleteLast()
{
    if(Head == NULL && Tail == NULL)
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

        while(temp->next != Tail)
        {
            temp = temp -> next;
        }
        
        delete Tail;
        Tail = temp;
        Tail -> next = Head;

    }
}

void SinglyCLL::DeleteAtPos(int iPos)
{
    int iSize = Count();

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
        PNODE temp = Head;
        int iCnt  = 0;

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        PNODE tempX = temp->next;

        temp -> next = tempX -> next;
        delete tempX;
    }


}

void SinglyCLL::Display()
{
    PNODE temp = Head;
    
    if(Head == NULL && Tail == NULL)    // If LL is empty (segmentation fault yeu shakto without filter cuz jr LL empty asel tr wr)
    {
        return;
    }

    do
    {
        cout << "|" << temp -> data << "| -> ";

        temp = temp -> next;

    }while(temp != Head);
    
    cout << endl;

}

int SinglyCLL::Count()
{
    int iCnt = 0;
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)
    {
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
    SinglyCLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.InsertFirst(5);
    obj.InsertFirst(1);
    obj.InsertLast(1000);
    obj.InsertLast(2000);

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.InsertAtPos(75,6);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    obj.DeleteAtPos(6);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;


    obj.DeleteFirst();
    obj.DeleteLast();
    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout << "Number of Nodes : " << iRet << endl;

    return 0;
}