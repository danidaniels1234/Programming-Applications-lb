// Accept N number & 1 number and return frequency of that 1 Number

import java.util.*;

class ArrayX
{
    private int Arr[];
    private int iNum;

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
        this.iNum = 0;
    }

    public void Accept()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Values : ");
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

        System.out.println("Enter the Number you want to Search : ");
        this.iNum = sc.nextInt();

    }

    public int Frequency()
    {
        int iCnt = 0, Freq = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == this.iNum)
            {
                Freq++;
            }
        }

        return Freq;

    }

}

class program144
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter n Number : ");
        int iValue = sobj.nextInt();

        ArrayX obj = new ArrayX(iValue);

        obj.Accept();
        int iRet = obj.Frequency();

        System.out.println("Frequency is : " + iRet);

    }
}