// accept number and display in Reverse order

import java.util.*;

class Digits
{
    private int iNo;

    public void Accept()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Number : ");
        this.iNo = sc.nextInt();
    } 

    public int Reverse()
    {
        int iCnt = 0,iDigit = 0,iRev = 0;

        for(iCnt = 1; iCnt <= this.iNo; iCnt++)
        {
            iDigit = iNo % 10;

            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10;
        }

        return iRev;
            
    }
    
}

class program138
{
    public static void main(String arg[])
    {
        Digits obj = new Digits();
        
        obj.Accept();
        int iRet = obj.Reverse();

        System.out.println(iRet);

    }
}