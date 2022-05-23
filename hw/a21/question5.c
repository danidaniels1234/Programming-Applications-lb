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

void DisplayLarge(PNODE Head)
{
    int iDigit = 0;
    int iMax = 0;

    PNODE temp = NULL;

    while(Head != NULL)
    {
        temp = Head;
        
        while((temp->data) != 0)
        {
            iDigit = (temp -> data) % 10;   

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            (temp->data) = (temp->data) / 10;
        }

        printf("%d\t",iMax);

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

    InsertFirst(&First,419);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);
    
    DisplayLarge(First);

    return 0;
}