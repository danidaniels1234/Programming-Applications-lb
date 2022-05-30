// Accept N number & 1 number and return frequency of that 1 Number

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize;
        int *Arr;
        int iNum;

    public:
        ArrayX(int iNo)
        {
            this->iSize = iNo;
            Arr = new int[iSize];
            this->iNum = 0;
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter Elements : " << endl;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }

            cout << "Enter the Number that you Want to Search : " << endl;
            cin >> this->iNum;
        }

        int Frequency()
        {
            int iCnt = 0, Freq = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == this->iNum)
                {
                    Freq++;
                }
            }

            return Freq;

        }

};

int main()
{
    int iValue = 0,iRet = 0;
    
    cout << "Enter n number" << endl;
    cin >> iValue;    

    ArrayX obj(iValue);

    obj.Accept();
    iRet = obj.Frequency();
    cout << "Frequency is : " << iRet << endl;

    return 0;
}