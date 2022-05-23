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

void SumDigit(PNODE Head)
{
    int iDigit = 0;
    int iSum = 0;
    PNODE temp = NULL;

    while(Head != NULL)
    {
        temp = Head;
        iSum = 0;

        while((temp->data) != 0)
        {
            iDigit = (temp -> data) % 10;
            iSum = iSum + iDigit;
            (temp->data) = (temp->data) / 10;
        }

        printf("%d\t",iSum);
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

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    
    SumDigit(First);

    return 0;
}