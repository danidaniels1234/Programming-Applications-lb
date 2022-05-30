// accept number and return count of even digits

import java.lang.*;
import java.util.*;

class Digits
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        this.iNo = sobj.nextInt();
    }

    public int CountDig()
    {
        int iCnt = 0;
        int iDigit = 0;
        int Count = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit % 2 == 0)
            {
                Count++;
            }

            iNo = iNo / 10;

        }

        return Count;
            
    }
}

class program136
{
    public static void main(String arg[])
    {
        Digits obj = new Digits();

        obj.Accept();
        int iRet = obj.CountDig();

        System.out.println("Count of Even Digits : " + iRet);

    }
}