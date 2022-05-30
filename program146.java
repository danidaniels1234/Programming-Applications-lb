// Accept N number and return frequency of Even Numbers

import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Values : ");
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }
    }

    public int Frequency()
    {
        int iCnt = 0, Freq = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                Freq++;
            }
        }

        return Freq;

    }
}

class program146
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter n Number : ");
        int iValue = sobj.nextInt();

        ArrayX obj = new ArrayX(iValue);

        obj.Accept();
        int iRet = obj.Frequency();

        System.out.println("Frequency of Even Numbers is : " + iRet);

    }
}