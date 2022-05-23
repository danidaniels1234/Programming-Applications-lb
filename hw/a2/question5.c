//  Accept number from user and check whether number is even or odd

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo < 0)     //updator
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Even Number\n");
    }
    else if(bRet == FALSE)
    {
        printf("Odd number\n");
    }

    return 0;
}

///////////////////////////////////////////////////////
//
//          TEST CASES
//  
//        Enter a number: 10
//        Even Number
//
//        Enter a number: 15
//        Odd number
//
//        Enter a number: -10
//        Even Number
//
//        Enter a number: -15
//        Odd number
//
///////////////////////////////////////////////////////
