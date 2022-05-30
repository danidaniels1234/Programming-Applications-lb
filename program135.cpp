// accept number and return count of even digits

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
            cin >> iNo;
        }

        int CountDig()
        {
            int iCnt = 0;
            int iDigit = 0;
            int Count = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                
                if(iDigit % 2 == 0)
                {
                    Count++;
                }

                iNo = iNo / 10;

            }

            return Count;
            
        }

};

int main()
{
    int iRet = 0;
    Digits obj;

    obj.Accept();
    iRet = obj.CountDig();

    cout << "Count of Even Digits is : " << iRet << endl;

    return 0;
}