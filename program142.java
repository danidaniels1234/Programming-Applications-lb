// Check Number is Armstrong number or Not

import java.util.*;

class Numbers
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        this.iNo = sobj.nextInt();
    }

    public boolean Armstrong()
    {
        int iDigit = 0,iCnt = 0,Count = 0,iSum = 0;
        int temp = this.iNo;

        while(this.iNo != 0)
        {
            Count++;
            iNo = iNo / 10;
        }

        this.iNo = temp;

        while(this.iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + Power(iDigit,Count);

            iNo = iNo / 10;
        }

        if(iSum == temp)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

    public int Power(int base,int power)
    {
        int Ans  = 1,iCnt = 0;

        for(iCnt = 1; iCnt <= power; iCnt++)
        {
            Ans = Ans * base;
        }

        return Ans;

    }
}

class program142
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        boolean bRet = obj.Armstrong();

        if(bRet == true)
        {
            System.out.println("It is an Armstrong Number");
        }
        else
        {
            System.out.println("It is not an Armstrong Number");
        }

    }
}