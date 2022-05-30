// accept n numbers & return diff btw summation of even no. & summation of odd no.

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
        
        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;

            cout << "Enter The Elements : " << endl;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        int DiffSummations()
        {
            int EvenSum = 0,OddSum = 0;
            int iCnt = 0, iDiff = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    EvenSum += Arr[iCnt];
                }
                else
                {
                    OddSum += Arr[iCnt];
                }
            }
            
            iDiff = (EvenSum - OddSum);

            return iDiff;
        
        }
};

int main()
{
    int iRet = 0;
    int iValue = 0;

    cout << "Enter no. of elements in array: " << endl;
    cin >> iValue;

    ArrayX obj(iValue);

    obj.Accept();
    iRet = obj.DiffSummations();

    cout << "Difference between Summation is : " << iRet << endl;

    return 0;
}