//  Accept two numbers from user and display first number in second number of times

#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter frequency: ");
    scanf("%d",&iCount);
    
    Display(iValue,iCount);

    return 0;
}


///////////////////////////////////////////////////
//          
//          TEST CASE
//
//      Enter number: -2
//      Enter frequency: 3
//      -2      -2      -2
//      
//      Enter number: 21
//      Enter frequency: -3
//      21      21      21
//    
//      Enter number: -2
//      Enter frequency: 0
//      
//    
//////////////////////////////////////////////////////