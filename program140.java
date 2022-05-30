// Check Number is Palindrome or Not

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

    public boolean Palindrome()
    {
        int iCnt = 0,iDigit = 0,iRev = 0;
        int temp = this.iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iRev = (iRev * 10) + iDigit;

            iNo = iNo / 10;
        }

        if(iRev == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
            
    }
    
}

class program140
{
    public static void main(String arg[])
    {
        Digits obj = new Digits();
        
        obj.Accept();
        boolean iRet = obj.Palindrome();

        if(iRet == true)
        {
            System.out.println("It is a Palindrome Number !!");
        }
        else
        {
            System.out.println("It is Not a Palindrome Number");
        }

    }
}