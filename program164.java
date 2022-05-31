// accept 1 Number & display Summation of all Non-Factors of that number
// Input:       12  /   10
// Output:      50  /   37

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

    public int NonFactorSummation()
    {
        int iCnt = 0;
        int iSum = 0;

        if(iNo <= 0)
        {
            return 0;
        }

        for(iCnt = 1; iCnt < this.iNo; iCnt++)
        {
            if(this.iNo % iCnt != 0) 
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;

    }
}

class program164
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        obj.Display();
        int iRet = obj.NonFactorSummation();
        System.out.println("Summation of all Non-Factors is : " + iRet);
    }
}