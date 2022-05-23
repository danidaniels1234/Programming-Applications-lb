#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    iNo = 64 + iNo;

    for(iCnt = 65; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the value\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}