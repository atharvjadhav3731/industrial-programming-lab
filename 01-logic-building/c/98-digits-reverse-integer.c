#include <stdio.h>
#include <stdlib.h>

int Revers(int ino)
{
    int iDigit = 0;
    int iRev = 0;
    while( ino != 0)
    {
        iDigit = ino % 10;
        iRev = (iRev * 10)+iDigit;
        ino = ino / 10;
    }
    return iRev;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = Revers(iValue);

    printf("Reverse Number is : %d",iRet);
    
    return EXIT_SUCCESS;
}
