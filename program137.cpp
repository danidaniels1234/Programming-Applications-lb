//  perfect number

#include<iostream>
using namespace std;

class Number
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
            cout << "Value is : " << this->iNo << endl;
        }

        bool CheckPerfect()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1; iCnt <= ((this->iNo) / 2) && (iSum <= this->iNo); iCnt++)
            {
                if(this->iNo % iCnt == 0)
                {
                    iSum += iCnt;
                }

            }

            if(iSum == this->iNo)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
};

int main()
{
    bool bRet = false;

    Number obj;

    obj.Accept();
    obj.Display();
    
    bRet = obj.CheckPerfect();

    if(bRet == true)
    {
        cout << "It is a Perfect Number" << endl;
    }
    else
    {
        cout << "It is not a Perfect Number" << endl;
    }


    return 0;
}