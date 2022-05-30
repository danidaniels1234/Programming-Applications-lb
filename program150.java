/*

    $   *   *   *
    #   $   *   *
    #   #   $   *
    #   #   #   $

*/

import java.util.*;

class Pattern
{
    private int iRow,iCol;

    public Pattern(int a,int b)
    {
        this.iRow = a;
        this.iCol = b;
    }

    public void Display()
    {
        int i = 0,j = 0;

        System.out.println("");

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i > j)
                {
                    System.out.print("#\t");
                }
                else if(j > i)
                {
                    System.out.print("*\t");
                }
                else if(i == j)
                {
                    System.out.print("$\t");
                }
            }

            System.out.println("");
        
        }
        System.out.println("");
    }
}

class program150
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows and Columns: ");
        int iValue1 = sobj.nextInt();
        int iValue2 = sobj.nextInt();

        Pattern obj = new Pattern(iValue1,iValue2);
        obj.Display();  

    }
}