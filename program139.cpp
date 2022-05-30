// Check Number is Palindrome or Not

#include<iostream>
using namespace std;

class Digits
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout << "Enter Number : " << endl;
            cin >> this->iNo;
        } 

        bool Palindrome()
        {
            int iCnt = 0,iDigit = 0,iRev = 0;
            int temp = this->iNo;

            while(iNo != 0)
            {
                iDigit = iNo % 10;

                iRev = (iRev * 10) + iDigit;

                iNo = iNo / 10;
            }

            if(iRev == temp)
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
    Digits obj;
    
    obj.Accept();
    bool bRet = obj.Palindrome();

    if(bRet == true)
    {
        cout << "It is a Palindrome Number !!" << endl;
    }
    else
    {
        cout << "It is Not a Palindrome Number" << endl;
    }

}