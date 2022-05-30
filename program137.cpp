// accept number and display in Reverse order

#include<iostream>
using namespace std;

class Digits
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout << "Enter Number " << endl;
            cin >> this->iNo;

            if(this->iNo < 0)
            {
                iNo = -iNo;
            }
        }

        void DisplayReverse()
        {
            int iDig = 0,iRev = 0;

            while(iNo != 0)
            {
                iDig = iNo % 10;

                iRev = (10 * iRev) + iDig;

                iNo = iNo / 10;
            }

            cout << iRev << endl;
            
        }
};

int main()
{
    Digits obj;

    obj.Accept();
    obj.DisplayReverse();
 
    return 0;
}