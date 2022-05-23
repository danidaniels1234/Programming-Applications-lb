/*

    Algorithm 

    START
        Accept number from user as No
        check whether it is negative or not
        if it is negative then convert it into positive

        create a variable named Sum and initialize it to 0
        create a variable named Cnt and initialize it to 1

        Iterate till Cnt is less than or equal to No
            Add the value of Cnt into variable Sum
            Increment value of Cnt by 1
        Loop
        
        Display the value of Sum
    END

*/

#include<stdio.h>

int Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("The addition is: %d\n",iRet);

    return 0;
}   