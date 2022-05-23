// accept number from user and print factors of that number

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ;iCnt < iNo ; iCnt++)
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

    DisplayFactor(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//                          TEST CASES
//          Enter a number:
//          12
//          1       2       3       4       6
//
//          Enter a number:
//          24
//          1       2       3       4       6       8       12
//
//          Enter a number:
//          18
//          1       2       3       6       9
//
////////////////////////////////////////////////////////////////////////////////