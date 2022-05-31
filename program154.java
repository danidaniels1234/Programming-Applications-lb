// Acept N numbers & display such numbers which are divisible by 3 & 5

import java.lang.*;
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
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Elements : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void DisplayNumbers()
    {
        int iCnt = 0;
        System.out.println("Numbers divisible by 3 & 5 are : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
            {
                System.out.print(Arr[iCnt] + "  ");
            }
        }

        System.out.println("");

    }
};

class program154
{
    public static void main(String arg[])
    {    
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter n Number : ");
        iValue = sobj.nextInt();

        ArrayX obj = new ArrayX(iValue);
        
        obj.Accept();
        obj.DisplayNumbers();

    }
}
