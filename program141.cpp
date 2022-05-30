// Check Number is Armstrong number or Not

#include<iostream>
using namespace std;

class Numbers
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout << "Enter Number : " << endl;
            cin >> this->iNo;
        } 

        bool Armstrong()
        {
            int iCnt = 0,iDigit = 0,Count = 0,iSum = 0;
            int temp = this->iNo;

            while(iNo != 0)
            {
                Count++;
                iNo = iNo / 10;
            }
            
            iNo = temp;

            while(iNo != 0)
            {
                iDigit = iNo % 10;

                iSum = iSum + Power(iDigit,Count);

                iNo = iNo / 10;
            }

            if(iSum == temp)
            {
                return true;
            }
            else
            {
                return false;
            }
                
        }

        int Power(int base,int power)
        {
            int Ans  = 1,iCnt = 0;

            for(iCnt = 1; iCnt <= power; iCnt++)
            {
                Ans = Ans * base;
            }

            return Ans;
        }
        
};

int main()
{
    Numbers obj;
    
    obj.Accept();
    bool bRet = obj.Armstrong();

    if(bRet == true)
    {
        cout << "It is an Armstrong Number !!" << endl;
    }
    else
    {
        cout << "It is Not an Armstrong Number" << endl;
    }

}