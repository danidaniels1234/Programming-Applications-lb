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

int Maximum(PNODE Head)
{
    int iMax = 0;
    iMax = (Head->data);
    
    while(Head != NULL)
    {
        if((Head -> data) > iMax)
        {
            iMax = Head->data;
        }      
      
        Head = Head -> next;
    
    }

    return iMax;

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
    
    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    ret = Maximum(First);

    printf("Largest number is : %d\n",ret);

    return 0;
}
