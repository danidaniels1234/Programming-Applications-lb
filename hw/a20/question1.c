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

void DisplayPerfect(PNODE Head)
{
    int iCnt = 0;
    int iSum = 0;
    
    while(Head != NULL)
    {
        iSum = 0;
        
        for(iCnt = 1; iCnt <= ((Head->data)/2) ; iCnt++)
        {
            if((Head -> data) % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == (Head->data))
        {
            printf("%d\t",Head -> data);
        }

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
    PNODE First = NULL;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    DisplayPerfect(First);

    return 0;
}