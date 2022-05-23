#include<stdio.h>

#define TRUE 0
#define FALSE 1
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)         // TIME COMPLEXITY : O(N)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }

    if(iNo == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}