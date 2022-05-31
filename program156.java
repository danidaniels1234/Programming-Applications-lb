// accept 1 number & print that number of Even Numbers 
// Input:       7
// Output:  2  4  6  8  10  12  14

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

    public void DisplayEven()
    {
        int iCnt = 0;
        
        if(iNo <= 0)
        {
            return;
        }

        for(iCnt = 1; iCnt <= (this.iNo * 2); iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(iCnt + "  ");
            }
        }
        System.out.println("");
    }

}

class program156
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        obj.Display();
        obj.DisplayEven();

    }
}