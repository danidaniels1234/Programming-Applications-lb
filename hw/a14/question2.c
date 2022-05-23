#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    int iCnt = 0;

    for(i = 1; i <= iRow; i++)
    {
        iCnt = 0;

        for(j = 1,ch = 'A'; j <= iCol; j++,ch++)
        {
            if(i % 2 == 0)
            {
                ch = 'a' + iCnt;
            }
            else
            {
                ch = 'A' + iCnt;
            }
            printf("%c\t",ch);   
            iCnt++;
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