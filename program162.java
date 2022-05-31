// accept 1 Number & display all Non-Factors of that number
// Input:       12
// Output:  5  7  8  9  10  11

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

    public void DisplayNonFactors()
    {
        int iCnt = 0;

        if(iNo <= 0)
        {
            return;
        }

        for(iCnt = 1; iCnt < this.iNo; iCnt++)
        {
            if(this.iNo % iCnt != 0) 
            {
                System.out.print(iCnt + "  ");
            }
        }

        System.out.println("");

    }
}

class program162
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        obj.Display();
        obj.DisplayNonFactors();

    }
}