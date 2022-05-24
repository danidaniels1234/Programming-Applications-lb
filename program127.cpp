#include<iostream>
using namespace std;

class Number
{
    private :
        int iNo;

    public :

        void Accept()
        {
            cout << "Enter the value" << endl;
            cin >> this->iNo;
        }

        void Display()
        {
            cout << "value is: " << this->iNo << endl;
        }

        int Factor()
        {
            int iFact = 1;
            int iCnt = 0;
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iFact *= iCnt;
            }
            return iFact;
        }

};

int main()
{
    Number nobj;
    int iRet = 0;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.Factor();
    cout << "Factorial is : " << iRet << endl;

    return 0;
}