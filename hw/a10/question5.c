#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    int iTemp = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
            iTemp++;
        }

    }

    if(iTemp == 0)
    {
        return iTemp;
    }
    else
    {
        return iProduct;
    }

}

int main()
{
    auto int iSize = 0,iRet = 0;
    register int iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements:\n");
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
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr,iSize);

    printf("Product is: %d\n",iRet);

    free(ptr);

    return 0;
}