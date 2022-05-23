#include<stdio.h>

void JwelersPortal(int iWeight)
{
    switch(iWeight)
    {
        case 1:
            printf("Gold price for %d gram is: Rs 4000\n",iWeight);
            break;
        case 2:
            printf("Gold price for %d gram is: Rs 8000\n",iWeight);
            break;
        case 5:
            printf("Gold price for %d gram is: Rs 20000\n",iWeight);
            break;
        case 10:
            printf("Gold price for %d gram is: Rs 40000\n",iWeight);
            break;
        default:
            printf("Invalid weight\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter gold coin size that you want to purchase:\n");
    scanf("%d",&iValue);

    JwelersPortal(iValue);

    return 0;
}