// accept 1 number & print that number of Even Numbers 
// Input:       7
// Output:  2  4  6  8  10  12  14

#include<iostream>
using namespace std;

class Numbers
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout << "Enter The Number : " << endl;
            cin >> this->iNo;
        }
        void Display()
        {
            cout << "The Value is : " << this->iNo << endl;
        }

        void DisplayEven()
        {
            int iCnt = 0;
        
            if(iNo <= 0)
            {
                return;
            }

            for (iCnt = 1; iCnt <= (this->iNo * 2); iCnt++)
            {
                if(iCnt % 2 == 0)
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
    obj.DisplayEven();

    return 0;
}