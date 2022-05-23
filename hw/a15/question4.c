#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0,j = 0;
    int iCnt1 = 0,iCnt2 = 0;

    for(i = 1; i <= iRow; i++)
    {     
        for(j = 1,iCnt1 = 1,iCnt2 = -1; j <= iCol; j++,iCnt1++,iCnt2--)
        {
            if(i % 2 != 0)
            {
                printf(" %d\t",iCnt1);
            }
            else
            {
                printf("%d\t",iCnt2);
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