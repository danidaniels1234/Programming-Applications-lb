#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return -1;
    }

    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0,iRet = 0;
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

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = FirstOcc(ptr,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurance of number is at Index : %d\n",iRet);
    }

    free(ptr);

    return 0;
}