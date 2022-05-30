import com.ArrayX.ArrayX;

import java.util.*;

class ArrayXX extends ArrayX
{
    public int EvenMult()
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % iCnt == 0)
            {
                iMult *= Arr[iCnt];
            }
        }

        return iMult;

    }

}

public class program126
{
    public static void main(String arg[])
    {
        int iLength = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of Array");
        
        iLength = sobj.nextInt();

        ArrayXX obj = new ArrayXX(iLength);

        obj.Accept();
        obj.Display();
        iRet = obj.EvenMult();
        System.out.println("Multiplication of Even numbers from array is : " + iRet);

        obj = null;

    }
}