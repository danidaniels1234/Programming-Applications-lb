#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    
    if(bFlag == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    bRet = Check(ptr,iSize,iValue);

    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is absent\n",iValue);
    }

    free(ptr);
    
    return 0;
}