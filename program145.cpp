// Accept N number and return frequency of Even Numbers

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize;
        int *Arr;

    public:
        ArrayX(int iNo)
        {
            this->iSize = iNo;
            Arr = new int[iSize];
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter Elements : " << endl;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        int Frequency()
        {
            int iCnt = 0, Freq = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
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
    cout << "Frequency of Even Numbers is : " << iRet << endl;

    return 0;
}