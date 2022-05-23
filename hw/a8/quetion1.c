#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iSumEven = 0, iSumOdd = 0, iCnt = 0;
    int iDifference = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    iDifference = iSumEven - iSumOdd;
    return iDifference;

}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Difference(ptr,iSize);

    printf("Difference is : %d\n",iRet);

    free(ptr);

    return 0;
}