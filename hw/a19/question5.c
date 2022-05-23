#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int Minimum(PNODE Head)
{
    int iMin = 0;
    iMin = (Head->data);
    
    while(Head != NULL)
    {
        if((Head -> data) < iMin)
        {
            iMin = Head->data;
        }      
        
        Head = Head -> next;
    
    }

    return iMin;

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
    int ret = 0;
    
    InsertFirst(&First,360);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    ret = Minimum(First);

    printf("Smallest number is : %d\n",ret);

    return 0;
}
