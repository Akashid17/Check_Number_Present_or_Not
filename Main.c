#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumber(int iArr[], int iLength)
{
    int j = 0;

    for(j == 0; j < iLength; j++)
    {
        if(iArr[j] == 11)
        {
            break;
        }
    }

    if(j == iLength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    BOOL bResult = FALSE;

    printf("Enter Count of Elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");

        return-1;
    }

    printf("Enter %d Elements\n",iSize);

    for(int i = 0; i < iSize; i++)
    {
        scanf("%d",&p[i]);
    }

    bResult = CheckNumber(p,iSize);

    if(bResult == TRUE)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }

    free(p);

    return 0;
}