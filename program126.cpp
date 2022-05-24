#include<iostream>
using namespace std;

class Number
{
    public :
        
    int Factor(int iNo)
    {
        int iCnt = 0;
        int iFact = 1;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }

};

int main()
{
    Number nobj;

    int iValue = 0;
    int iRet = 0;

    cout << "Enter number : " << endl;
    cin >> iValue;

    iRet = nobj.Factor(iValue);
    cout << "Factorial is : " << iRet << endl;

    return 0;
}