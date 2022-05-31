// accept 1 Number & display Factors in Decresing order
// Input:       12
// Output:  6  4  3  2  1

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
            cout << "The value is : " << this->iNo << endl;
        }

        void DisplayFactorsReverse()
        {
            int iCnt = 0;

            for(iCnt = (this->iNo / 2); iCnt >= 1; iCnt--)
            {
                if(this->iNo % iCnt == 0)
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
    obj.DisplayFactorsReverse();

    return 0;
}