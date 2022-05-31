// accept 1 Number & display all Non-Factors of that number
// Input:       12
// Output:  5  7  8  9  10  11

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

        void DisplayNonFactors()
        {
            int iCnt = 0;

            if(iNo <= 0)
            {
                return;
            }

            for(iCnt = 1; iCnt < this->iNo; iCnt++)
            {
                if(this->iNo % iCnt != 0) 
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
    obj.DisplayNonFactors();


    return 0;
}