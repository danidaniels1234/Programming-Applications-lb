/*

    *   *   *   *
    *   *   *
    *   *
    *

*/


#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow,iCol;

    public:
        Pattern(int a,int b)
        {
            this->iRow = a;
            this->iCol = b;
        }

        void Display()
        {
            int i = 0,j = 0;
            cout << endl;

            for(i = this->iRow; i > 0; i--)
            {
                for(j = 1; j <= this->iCol; j++)
                {
                    if(i >= j)
                    {
                        cout << "*\t";
                    }
                }

                cout << endl;
            }

            cout << endl;
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter number of rows and columns : " << endl;
    cin >> iValue1;
    cin >> iValue2;

    Pattern obj(iValue1,iValue2);
    obj.Display();

    return 0;
}