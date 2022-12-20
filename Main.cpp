#include<iostream>

using namespace std;

class MathematicsX
{
    public:
        
        bool CheckNumber(int*,int);
};

bool MathematicsX::CheckNumber(int iArr[], int iLength)
{
    int j = 0;       

    for(j = 0; j < iLength; j++)
    {
        if(iArr[j] == 11)
        {
            break;
        }
    }

    if(j == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;

    cout<<"Enter Count of Elements\n";
    cin>>iSize;

    p = new int[iSize];

    if(p == NULL)
    {
        cout<<"Unable to allocate memory\n";
    }

    cout<<"Enter "<<iSize<<" Elements\n";

    for(int i = 0; i < iSize; i++)
    {
        cin>>p[i];
    }

    MathematicsX mobj;

    bool bResult = mobj.CheckNumber(p,iSize);

    if(bResult == true)
    {
        cout<<"11 is Presnet\n";
    }
    else
    {
        cout<<"11 is Absent\n";
    }

    delete[] p;

    return 0;
}