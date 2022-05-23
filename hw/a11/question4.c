#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    int iNo = 0;
    int iCntX = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iCntX = 0;       
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iNo = iNo / 10;
            iCntX++;
        }

        if(iCntX == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }

    }

}

int main()
{
    int iSize = 0;
    register int iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr);

    return 0;
}