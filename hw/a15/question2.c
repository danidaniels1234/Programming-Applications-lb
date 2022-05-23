#include<stdio.h>

void Display(int iRow,int iCol)
{
    int iCnt= 2;

    int i = 0,j = 0;

    for(i = 1; i <= iRow; i++)
    {     
        for(j = 1,iCnt = 1; j <= iCol; j++,iCnt++)
        {
            if(i % 2 != 0)
            {
                iCnt++;
                printf("%d\t",iCnt);
            }
            else
            {
                printf("%d\t",iCnt);
                iCnt++;
            }

        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of Rows:\n");
    scanf("%d",&iValue1);
    printf("Enter number of Columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);    

    return 0;
}