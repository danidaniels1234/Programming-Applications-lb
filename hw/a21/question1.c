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

void Reverse(PNODE Head)
{
    int iDigit = 0;
    int iRev = 0;
    PNODE temp = NULL;

    while(Head != NULL)
    {
        temp = Head;
        iRev = 0;

        while((temp->data) != 0)
        {
            iDigit = (temp -> data) % 10;
            iRev = (iRev * 10) + iDigit;
            (temp->data) = (temp->data) / 10;
        }

        printf("%d\t",iRev);

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
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    
    Reverse(First);

    return 0;
}