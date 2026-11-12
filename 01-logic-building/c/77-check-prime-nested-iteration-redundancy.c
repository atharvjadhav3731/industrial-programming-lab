#include <stdio.h>
#include <stdbool.h>
bool ChekPrime(int ino)
{
    int iCnt = 0;
    int iSum = 0;
    for(int iCnt = 0; iCnt < ino; iCnt++)
    {
    for(iCnt =1; iCnt<= ino/2; iCnt++)
    {
        if((ino % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
        
    }
    if(iSum == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
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
         printf("It is  not aPrime NUmber");
    }
}