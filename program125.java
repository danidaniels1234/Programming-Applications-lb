/*      iRow = 4   iCol = 4

    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *

*/

import java.lang.*;

class Pattern
{
    private int iRow;
    private int iCol;


    public Pattern(int a,int b)
    {
        this.iRow = a;
        this.iCol = b;
    }

    public void DisplayPattern()
    {
        int i = 0,j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print("*\t");
            }

            System.out.println("");
        }
    }

};

class program125
{
    public static void main(String arg[])
    {
        Pattern obj = new Pattern(4,4);

        obj.DisplayPattern();    

    }
}