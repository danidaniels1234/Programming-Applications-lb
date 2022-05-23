//  accept number from user and display it's factors in decresing order

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo-1) ; iCnt < iNo ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);            
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number: \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//      
//                              TEST CASES
//            Enter a number:
//            12
//            6       4       3       2       1
//
//            Enter a number:
//            13
//            1
//
//            Enter a number:
//            10
//            5       2       1
//
//            Enter a number:
//            18
//            9       6       3       2       1
//
//////////////////////////////////////////////////////////////////////////////////////////////////////