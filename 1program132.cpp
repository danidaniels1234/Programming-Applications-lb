// Singly Circular Linked List CUI APPLICATION
/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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

    cout << "\nElements From Linked List are : " << endl;

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
   int iChoice = 1;
   SinglyCLL obj;
   int iValue = 0,iPos = 0, iRet = 0;

    while(iChoice != 0)
    {
        cout << "\nEnter your Choise : " << endl;
        cout << "1 : Insert First" << endl;
        cout << "2 : Insert Last" << endl;
        cout << "3 : Insert at Position" << endl;
        cout << "4 : Delete First" << endl;
        cout << "5 : Delete Last" << endl;
        cout << "6 : Delete at position" << endl;
        cout << "7 : Display the data" << endl;
        cout << "8 : Count Number of elements" << endl;
        cout << "9 : Terminate the application" << endl;
        cin >> iChoice;

        switch(iChoice)
        {
            case 1:
                cout << "Enter the value to insert" << endl;
                cin >> iValue;
                obj.InsertFirst(iValue);
                break;
            
            case 2:
                cout << "Enter the value to insert" << endl;
                cin >> iValue;
                obj.InsertLast(iValue);
                break;
            
            case 3:
                cout << "Enter the value to insert" << endl;
                cin >> iValue;
                cout << "Enter the Position : " << endl;
                cin >> iPos;
                obj.InsertAtPos(iValue,iPos);
                break;
            
            case 4:
                obj.DeleteFirst();
                break;

            case 5:
                obj.DeleteLast();
                break;

            case 6:
                cout << "Enter the position : " << endl;
                cin >> iPos;
                obj.DeleteAtPos(iPos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                iRet = obj.Count();
                cout << "\nNumber of Elements are : " << iRet << endl;
                break;

            case 9:
                cout << "Thank You For Using The Application" << endl;
                iChoice = 0;
                break;
            
            default:
                cout << "Please Enter Proper Choice"<< endl;
                break;
        }
        
    }

    


    return 0;
}
