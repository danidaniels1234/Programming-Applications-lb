#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void DisplaySmall(PNODE Head)
{
    int iDigit = 0;
    int iMin = 0;

    PNODE temp = NULL;

    while(Head != NULL)
    {
        temp = Head;
        
        while((temp->data) != 0)
        {
            iMin = iDigit;
            
            iDigit = (temp -> data) % 10;   

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            (temp->data) = (temp->data) / 10;
        }

        printf("%d\t",iMin);

        Head = Head -> next;

    }
}

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First,892);
    InsertFirst(&First,4154);
    InsertFirst(&First,322345);
    InsertFirst(&First,20534);
    InsertFirst(&First,11342);
    
    DisplaySmall(First);

    return 0;
}