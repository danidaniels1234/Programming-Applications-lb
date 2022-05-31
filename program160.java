// accept 1 Number & display Factors in Decresing order
// Input:       12
// Output:  6  4  3  2  1

import java.lang.*;
import java.util.*;

class Numbers
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("The Value is : " + this.iNo);
    }

    public void DisplayFactorsReverse()
    {
        int iCnt = 0;

        if(iNo <= 0)
        {
            return;
        }

        for(iCnt = (this.iNo / 2); iCnt >= 1; iCnt--)
        {
            if(this.iNo % iCnt == 0)
            {
                System.out.print(iCnt + "  ");
            }
        }

        System.out.println("");

    }
}

class program160
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        obj.Display();
        obj.DisplayFactorsReverse();

    }
}