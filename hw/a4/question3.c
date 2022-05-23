// accept number from user and display all it's non factors

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//      
//                              TEST CASES
//    Enter a number:
//    12
//    5       7       8       9       10      11
//
//    Enter a number:
//    13
//    2       3       4       5       6       7       8       9       10      11      12
//
//    Enter a number:
//    10
//    3       4       6       7       8       9
//
//    Enter a number:
//    8
//    3       5       6       7
//
//////////////////////////////////////////////////////////////////////////////////////////////////////