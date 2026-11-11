#include <stdio.h>
#include <stdlib.h>

int Summation(int ino)
{
    int iCnt = 0;
    int iSum = 0;
    for(int iCnt =1 ; iCnt <= ino ; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}
int main ()
{
    int iValue =0;
    int iRet = 0;
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Sumation is : %d\n",iRet);

    return EXIT_SUCCESS;
}
