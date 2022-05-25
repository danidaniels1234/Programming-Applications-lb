#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private:
        T No1;
        T No2;

    public:

        void Accept()
        {
            cout << "Enter First Number: " << endl;
            cin >> this->No1;
            cout << "Enter Second Number: " << endl;
            cin >> this->No2;
        }

        T Addition()
        {
            T Ans;
            Ans = this->No1 + this->No2;
            return Ans;
        }

        T Substraction()
        {
            T Ans;
            Ans = this->No1 - this->No2;
            return Ans;
        }

        T Division()
        {
            T Ans;
            Ans = this->No1 / this->No2;
            return Ans;
        }

        T Multiplication()
        {
            T Ans;
            Ans = this->No1 * this->No2;
            return Ans;
        }

};

int main()
{
    int Ret;
    
    Arithmetic<double>objX;

    obj1.Accept();
    objX.Accept();

    Ret = obj1.Addition();
    cout << "Addition is : " << Ret << endl;

    Ret = obj1.Substraction();
    cout << "Substraction is : " << Ret << endl;

    Ret = obj1.Multiplication();
    cout << "Multiplication is : " << Ret << endl;
    
    Ret = obj1.Division();
    cout << "Division is : " << Ret << endl;

    int iChoice = 1;
    int DataChoise = 1;
    int Num1 = 0;

    while(iChoice != 0)
    {
        cout << "Choose data types : " << endl;
        cout << "0 : Operation between Integers : " << endl;
        cout << "1 : Operation between Floats : " << endl;
        cin >> Num1;
        
        switch(DataChoise)
        {
            case 0:
                Arithmetic <int> obj1;
                break;

            case 1:
                Arithmetic <double> obj1;
                break;
            
            default:
                cout << "Coose correct Data Type:";
                break;
        }
       
        cout << "Chose The Operation : " << endl;
        cout << "1 : Addition" << endl;
        cout << "2 : Substraction" << endl;
        cout << "3 : Multiplication" << endl;
        cout << "4 : Division" << endl;
        cout << "5 : All Operations at same time" << endl;
        cout << "6 : Terminate the Application" << endl;

        switch(iChoice)
        {

        }
        

    }


    return 0;
}