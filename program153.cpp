// Acept N numbers & display such numbers which are divisible by 3 & 5

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
            
            for(iCnt = 0; iCnt < this->iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void DisplayNumbers()
        {
            int iCnt = 0;
            cout << "Numbers divisible by 3 & 5 are : " << endl;
            
            for(iCnt = 0; iCnt < this->iSize; iCnt++)
            {
                if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
                {
                    cout << Arr[iCnt] << "  ";

                }
            }

            cout << endl;

        }
};

int main()
{
    int iValue = 0;

    cout << "Enter n Number : " << endl;
    cin >> iValue;

    ArrayX obj(iValue);
    
    obj.Accept();
    obj.DisplayNumbers();

    return 0;
}