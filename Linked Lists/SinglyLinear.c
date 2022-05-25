// Singly Linear Linked List in C

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

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head != NULL)
    {
        newn -> next = *Head;
    }

    *Head = newn;

}

void InsertLast(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
       temp -> next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = NULL;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        temp = *Head;

        *Head = temp -> next;

        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = NULL;
    
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        temp = *Head;

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);
        temp -> next = NULL;
    }

}

void InsertAtPos(PPNODE Head,int No,int pos)
{
    int size = 0;
    int iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    size = Count(*Head);

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if((pos < 1) || (pos > (size + 1)))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(pos == (size + 1))
    {
        InsertLast(Head,No);
    }
    else
    {
        temp = *Head;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;

    }
}

void DeleteAtPos(PPNODE Head,int pos)
{
    int size = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE tempX = NULL;

    size = Count(*Head);

    if((pos < 1) || (pos > size))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(Head);
    }
    else if(pos == size)
    {
        DeleteLast(Head);
    }
    else
    {
        temp = *Head;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        tempX = temp->next;

        temp -> next = tempX->next;

        free(tempX);

    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,100);
    InsertFirst(&First,50);
    InsertFirst(&First,10);

    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);
    
    printf("\n");

    InsertLast(&First,150);
    InsertLast(&First,170);

    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    printf("\n");

    DeleteFirst(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    printf("\n");

    DeleteLast(&First);

    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    printf("\n");

    InsertAtPos(&First,120,3);

    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    printf("\n");

    DeleteAtPos(&First,3);

    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);


    return 0;
}