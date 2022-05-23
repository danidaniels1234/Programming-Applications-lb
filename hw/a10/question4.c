#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;

    printf("Output: \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\n",Arr[iCnt]);
        }

    }

}

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to alocate the memory\n");
        return -1;
    }

    printf("Enter %d numbers\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter Starting number of range:\n");
    scanf("%d",&iValue1);
    printf("Enter Ending number of range:\n");
    scanf("%d",&iValue2);

    Range(ptr,iSize,iValue1,iValue2);

    free(ptr);

    return 0;
}