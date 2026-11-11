#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ULONG;
ULONG Factorial(int ino)
{
    int iCnt = 0;
    long long iFact = 0;
    
    for(int iCnt =1 , iFact = 1; iCnt <= ino ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
int main ()
{
    int iValue =0;
    ULONG iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %lld\n",iRet);

    return EXIT_SUCCESS;
    
}
