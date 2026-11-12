#include <stdio.h>
#include <stdbool.h>
bool ChekPrime(int ino)
{
    int iCnt = 0;
    bool bFlag = true;
    
    for(int iCnt = 2; iCnt < ino/2; iCnt++)
    {
        if(ino % iCnt == 0 )
        {
            bFlag = false;
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the NUmber : \n ");
    scanf("%d",&iValue);

    bRet = ChekPrime(iValue);

    if(bRet)
    {
        printf("It is Prime NUmber");
    }
    else{
         printf("It is  not a Prime NUmber");
    }
}