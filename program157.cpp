// accept 1 Number & print even factors of that number
// Input:       24
// Output:  2  4  6  8  12

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

        void DisplayEvenFactors()
        {
            int iCnt = 0;

            if(iNo <= 0)
            {
                return;
            }

            for(iCnt = 1; iCnt <= (this->iNo / 2); iCnt++)
            {
                if((iCnt % 2 == 0) && ((this->iNo % iCnt) == 0)) 
                {
                    cout << iCnt << "  ";
                }
            }

            cout << endl;

        }
};

int main()
{
    Numbers obj;

    obj.Accept();
    obj.Display();
    obj.DisplayEvenFactors();


    return 0;
}