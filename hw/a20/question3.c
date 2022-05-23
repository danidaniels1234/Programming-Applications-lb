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

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if(Head->data % 2 == 0)
        {
            iSum = iSum + (Head->data);
        }

        Head = Head -> next;
    }
    return iSum;
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

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    iRet = AdditionEven(First);

    printf("Addition Of Even numbers is : %d\n",iRet);

    return 0;
}