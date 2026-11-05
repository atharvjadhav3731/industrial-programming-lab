// Input = 5
// output = 1+2+3+4+5= 15

#include <stdio.h>
#include <stdlib.h>

int Summation(int ino)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt =1; iCnt <=ino; iCnt++ )
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter frequency ");
    scanf("%d",iValue);

    printf("Summation is : %d",Summation(iValue));

    return EXIT_SUCCESS;
}
