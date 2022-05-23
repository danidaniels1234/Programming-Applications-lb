// accept 1 number from user and print that number times even number on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 2 ; iCnt <= (2*iNo) ; iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
//
//                              TEST CASE
//      Enter a number:
//      7
//      2       4       6       8       10      12      14
//
//      Enter a number:
//      5
//      2       4       6       8       10
//
//      Enter a number:
//      -2
//  
/////////////////////////////////////////////////////////////////////////////////////