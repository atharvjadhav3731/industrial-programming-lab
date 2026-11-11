#include <stdio.h>
#include <stdlib.h>

int Factorial(int ino)
{
    int iCnt = 0;
    int iFact = 1;
    for(int iCnt = 1; iCnt <= ino ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}
int main ()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %d\n",iRet);

    return EXIT_SUCCESS;
 
}
