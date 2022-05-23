/*
0 to 35     Fail
35 to 50    Pass Class
50 to 60    Second Class
60 to 75    First Class
75 to 100   First Class with distinction
*/

#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks > 0.0) && (fMarks < 35.0))
    {
        printf("You are fail\n");
    }
    else if((fMarks >= 35.0) && (fMarks < 50.0))
    {
        printf("Pass Class\n");
    }
    else if((fMarks >= 50.0) && (fMarks < 60.0))
    {
        printf("Second Class\n");
    }
    else if((fMarks >= 60.0) && (fMarks < 75.0))
    {
        printf("First Class\n");
    }
    else if((fMarks >= 75.0) && (fMarks <= 100.0))
    {
        printf("First Class with Distinction\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }
}

int main()
{
    float fValue = 0.0;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}