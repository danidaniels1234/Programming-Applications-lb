#include<iostream>
using namespace std;

class ArrayX
{
    private :
        int iSize;
        int *Arr;

    public : 
        ArrayX(int iValue)
        {
            this->iSize = iValue;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter the Elements: " << endl;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout << "Elements of array are" << endl;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << endl;
            }
        }

        int Summation()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;

        }

};

int main()
{
    int iRet = 0;
    int iNo = 0;

    cout << "Enter number of Elements in Array : " << endl;
    cin >> iNo;

    ArrayX obj1(iNo);

    obj1.Accept();
    obj1.Display();
    iRet = obj1.Summation();

    cout << "Addition of numbers in Array is : " << iRet << endl;

    return 0;
}