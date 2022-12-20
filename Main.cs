using System;


class MathematicsX
{
    public

        bool CheckNumber(int []iArr)
        {
            int j = 0;

            for(j = 0; j < iArr.Length; j++)
            {
                if(iArr[j] == 11)
                {
                    break;
                }
            }

            if(j == iArr.Length)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
}

class main
{
    public static void Main(String[] args)
    {
        Console.WriteLine("Enter Count of Elements");
        
        int iSize = Convert.ToInt32(Console.ReadLine());

        int []iElements = new int[iSize];

        if(iElements.Length == 0)
        {
            Console.WriteLine("Unable to allocate memory");
            return;
        } 

        Console.WriteLine("Enter "+iSize+" Elements");

        for(int i = 0; i < iSize; i++)
        {
            iElements[i] = Convert.ToInt32(Console.ReadLine());
        }

        MathematicsX mobj = new MathematicsX();

        bool bResult = mobj.CheckNumber(iElements);

        if(bResult == true)
        {
            Console.WriteLine("11 is Present");
        } 
        else
        {
            Console.WriteLine("11 is Absent");
        }
    }
}
