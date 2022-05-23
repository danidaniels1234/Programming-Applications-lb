// accept number from user and print even factors of that number

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
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
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

/////////////////////////////////////////////////////////////////
//
//                  TEST CASES
//       Enter a number:
//       18
//       2       6
//
//       Enter a number:
//       36
//       2       4       6       12      18
//
//       Enter a number:
//       10
//       2
//
//       Enter a number:
//       24
//       2       4       6       8       12
//
/////////////////////////////////////////////////////////////////////