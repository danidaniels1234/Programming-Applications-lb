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

int SearchLastOcc(PNODE Head,int no)
{
    int iCnt = 0;
    int temp = 0;

    while(Head != NULL)
    {
        iCnt++;
        if(Head->data == no)
        {
            temp = iCnt;        
        }
        Head = Head -> next;
    }

    return temp;

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
    int value = 0;
    printf("Enter the element you want to search: ");
    scanf("%d",&value);
    
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    ret = SearchLastOcc(First,value);

    printf("\nLast Occurance is : %d\n",ret);

    return 0;
}
