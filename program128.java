// Calculate Factorial

import java.lang.*;
import java.util.*;

class Number
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
        System.out.println("The value is :" + this.iNo);
    }

    public boolean CheckPerfect()
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= ((this.iNo) / 2) && (iSum <= this.iNo); iCnt++)
        {
            if(this.iNo % iCnt == 0)
            {
                iSum += iCnt;
            }
        }

        if(iSum == this.iNo)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

}

class program128
{
    public static void main(String arg[])
    {
        boolean bRet = false;

        Number obj = new Number();

        obj.Accept();
        obj.Display();
        bRet = obj.CheckPerfect();

        if(bRet == true)
        {
            System.out.println("It is a Perfect Number");
        }
        else
        {
            System.out.println("It is not a Perfect Number");
        }

    }

}