#include <stdio.h>
#include <stdlib.h>

int SumFactor(int ino)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(int iCnt =1 ; iCnt <= ino/2 ; iCnt++)
    {
        if(ino % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main ()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    SumFactor(iValue);
    printf("Summation of factor is : %d\n", iRet);

    return EXIT_SUCCESS;
}

/*
    Time Complexity : O(N/2)
*/