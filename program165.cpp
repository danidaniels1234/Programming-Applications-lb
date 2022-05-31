// accept 1 Number & display Summation of all Non-Factors of that number
// Input:       12  /   10
// Output:      50  /   37

#include<iostream>
using namespace std;

class Numbers
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout << "Enter the Number : " << endl;
            cin >> this->iNo;
        }
        void Display()
        {
            cout << "The Value is : " << this->iNo << endl;
        }

        int FactDiff()
        {
            int iCnt = 0;
            int iSumFact = 0;
            int iSumNonFact = 0;
            int iFactDiff = 0;

            if(iNo <= 0)
            {
                return 0;
            }

            for(iCnt = 1; iCnt < this->iNo; iCnt++)
            {
                if(this->iNo % iCnt != 0) 
                {
                    iSumNonFact = iSumNonFact + iCnt;
                }
                else
                {
                    iSumFact = iSumFact + iCnt;
                }
            }

            iFactDiff = iSumFact - iSumNonFact;
            return iFactDiff;

        }
};

int main()
{
    Numbers obj;

    obj.Accept();
    obj.Display();
    int iRet = obj.FactDiff();
    cout << "Diffrence between Summmaiton of Factors and Non-Factors is  :  " << iRet << endl;

    return 0;
}