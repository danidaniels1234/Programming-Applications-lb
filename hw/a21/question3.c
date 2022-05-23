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

void DisplayProduct(PNODE Head)
{
    int iDigit = 0;
    int iMult = 0;

    PNODE temp = NULL;

    while(Head != NULL)
    {
        temp = Head;
        iMult = 1;

        while((temp->data) != 0)
        {
            iDigit = (temp -> data) % 10;
            
            if(iDigit != 0)
            {
                iMult = iMult * iDigit;
            }

            (temp->data) = (temp->data) / 10;
        }

        printf("%d\t",iMult);

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

    InsertFirst(&First,89);
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    
    DisplayProduct(First);

    return 0;
}