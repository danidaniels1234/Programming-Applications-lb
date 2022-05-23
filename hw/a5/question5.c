// accept number from user and return diffrence between summations of all it's factors & non-factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        
        if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    
    iDiff = iSumFact - iSumNonFact;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Factorial diffrence is:  %d",iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//                        TEST CASES
//        Enter a number:
//        12
//        Factorial diffrence is:  -34
//
//        Enter a number:
//        10
//        Factorial diffrence is:  -29
//
//        Enter a number:
//        18
//        Factorial diffrence is:  -111
//
//        Enter a number:
//        24
//        Factorial diffrence is:  -204
//
//////////////////////////////////////////////////////////////////////