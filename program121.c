#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;

}

int main()
{
    int iRet = 0;
    int iSize = 0;
    int * ptr = NULL;
    int iCnt = 0;

    printf("Enter number of elemetns : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values of array : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Summation(ptr,iSize);
    printf("Addition of %d numbers is : %d\n",iSize,iRet);

    free(ptr);

    return 0;
}