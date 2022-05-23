#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iDiff = 0;
    int iMax = Arr[0], iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    
    iDiff = iMax - iMin;
    return iDiff;

}

int main()
{
    int iSize = 0,iRet = 0;
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

    iRet = Difference(ptr,iSize);

    printf("Difference between largest & smallest number is : %d\n",iRet);

    free(ptr);
    
    return 0;
}