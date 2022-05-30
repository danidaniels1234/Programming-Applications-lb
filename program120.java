// Calculate Factorial

import java.lang.*;
import java.util.*;

class Number
{
    public  int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in); 
        System.out.println("Enter number: ");
        this.iNo = sobj.nextInt();   
    }

    public void Display()
    {
        System.out.println("Value is : " + iNo);
    }

    public int Fatorial()
    {
        int iFact = 1;
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact *= iCnt;
        }
        return iFact;
    }

}

class program120
{
    public static void main(String arg[])
    {
        int iRet = 0;

        Number nobj1 = new Number();
        Number nobj2 = new Number();
        Number nobj3 = new Number();

        nobj1.Accept();
        nobj1.Display();
        iRet = nobj1.Fatorial();
        System.out.println("Factorial is : " + iRet);

        nobj2.Accept();
        nobj2.Display();
        iRet = nobj2.Fatorial();
        System.out.println("Factorial is : " + iRet);

        nobj3.Accept();
        nobj3.Display();
        iRet = nobj3.Fatorial();
        System.out.println("Factorial is : " + iRet);

    }

}