import java.lang.*;
import java.io.*;

class MathematicsX
{
	public

		boolean CheckNumber(int []iArr)
		{
			int j = 0;

			for(j = 0; j < iArr.length; j++)
			{
				if(iArr[j] == 11)
				{
					break;
				}
			}

			if(j == iArr.length)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
}

class Main
{
	public static void main(String[] args)throws Exception
	{
		BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Count of Elements");
		
		int iSize = Integer.parseInt(bobj.readLine());

		int iElements[] = new int[iSize];

		if(iElements.length == 0)
		{
			System.out.println("Unable to allocate memory");

			return;
		}

		System.out.println("Enter "+iSize+" Elements");

		for(int i = 0; i < iSize; i++)
		{
			iElements[i] = Integer.parseInt(bobj.readLine());
		}

		MathematicsX mobj = new MathematicsX();

		boolean bResult = mobj.CheckNumber(iElements);

		if(bResult == true)
		{
			System.out.println("11 is Present");
		}
		else
		{
			System.out.println("11 is Absent");
		}
	}
}