// accept n numbers & return diff btw summation of even no. & summation of odd no.

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
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Elements:");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int DiffSumations()
    {
        int EvenSum = 0,OddSum = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                EvenSum += Arr[iCnt];
            }
            else
            {
                OddSum += Arr[iCnt];
            }
        }
        
        int iDiff = (EvenSum - OddSum);

        return iDiff;   
    }
}

public class program134
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter value of N : ");

        int iValue = sobj.nextInt();

        ArrayX obj = new ArrayX(iValue);

        obj.Accept();
        int iRet = obj.DiffSumations();

        System.out.println("Difference between Summation is : " + iRet);

    }

}