//  accept number from user and return summation of all the factorial

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation is: %d\n",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//                  TEST CASES
//        Enter a number:
//        10
//        Summation is: 37
//
//        Enter a number:
//        12
//        Summation is: 50
//
//        Enter a number:
//        18
//        Summation is: 132
//
//        Enter a number:
//        15
//        Summation is: 96
//
///////////////////////////////////////////////////////////////////////