// accept 1 Number & return diff bet Summation of all it's Factors and Non-Factors
// Input:       12          /   10
// Output:      -34(16-50)  /   -29(8-37)

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

    public int FactDiff()
    {
        int iCnt = 0;
        int iSumFact = 0;
        int iSumNonFact = 0;
        int iFactDiff = 0;

        if(iNo <= 0)
        {
            return 0;
        }

        for(iCnt = 1; iCnt < this.iNo; iCnt++)
        {
            if(this.iNo % iCnt != 0) 
            {
                iSumNonFact = iSumNonFact + iCnt;
            }
            else
            {
                iSumFact = iSumFact + iCnt;
            }
        }

        iFactDiff = iSumFact - iSumNonFact;
        return iFactDiff;

    }
}

class program166
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        obj.Display();
        int iRet = obj.FactDiff();
        System.out.println("Diffrence between Summmaiton of Factors and Non-Factors is  :  " + iRet);
    }
}