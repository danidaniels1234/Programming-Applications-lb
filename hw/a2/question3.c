//  Accept one number from user if number is less than 10
//  then print "Hello" otherwise print "Demo"

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////
//      
//          Test case
//
//    Enter number: 5
//    Hello
//
//    Enter number: 10
//    Demo
//
//    Enter number: 15
//    Demo
//
//////////////////////////////////////////////